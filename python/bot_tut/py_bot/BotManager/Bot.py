import platform, netifaces, hashlib

class Bot(object):
	INIT 	= "init"
	
	def __init__(self):
		self.status 				= Status.INIT
        
        self.url 					= "http://localhost:9090/bot"
        self.sleepCycle 			= 10
        self.sleepCycleRandomness 	= 5

        self.osName                 = platform.uname().system
        self.osVersion              = platform.uname().version
        self.osType                 = platform.uname().release
        self.osArch                 = platform.uname().machine
        self.userName               = platform.uname().node

        self.setIpDetails()
        self.generateBotId()

    def __setIpDetails(self):
        gateway             = netifaces.gateways()['default'][netifaces.AF_INET]

        self.gateway        = gateway[0]
        self.interface      = gateway[1]

        ipDetails           = netifaces.ifaddresses(self.interface)[netifaces.AF_INET][0]
        self.ipAddress      = ipDetails["addr"]
        self.ipBroadcast    = ipDetails["broadcast"]
        self.ipSubnet       = ipDetails["netmask"]

	def generateBotId(self):
        myHash          = hashlib.md5()
        self.id         = myHash.update((self.osName + self.osVersion + self.userName).encode("utf-8")).hexdigest()

    def init(self):
        print("my Id: %s" % self.id)