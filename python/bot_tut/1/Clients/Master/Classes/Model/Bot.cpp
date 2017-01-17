#ifndef BOT_CPP 
#define BOT_CPP

#include <iostream>
#include <string>

#include "HostNetParams.h"
#include "Tools.h"

using namespace std;

class Bot {
private:
	string status;
	string pwd;
	string url;
	string id;
	// publicIp
	
	unsigned int sleepCycle;
	unsigned int sleepCycleRandomness;

	hostNetParams hostNetParams;

public:
	Bot();
	void generateBotId();

	string getStatus();
	string getPwd();
	string getUrl();
	string getId();

	unsigned int getSleepCycle();
	unsigned int getSleepCycleRandomness();

	HostNetParams gethostNetParams();


	void setStatus(string);
	void setPwd(string);
	void setUrl(string);
	void setId(string);
	void sethostNetParams(hostNetParams);
	void setSleepCycle(unsigned int);
	void setSleepCycleRandomness(unsigned int);
};

Bot::Bot() {
	this->setStatus("init");
	this->setUrl("http://localhost:9090");
	this->setPwd("1qaz2wsx");
	this->setSleep(10);
	this->setId(""); 
	//this->setPublicIp();
	//- publicIp: null
	this->hostNetParams = new HostNetParams;

}

void Bot::generateBotId() {
	HostDetails _hostDetails 	= new HostDetails;
	string _data				= "";
	if(_hostDetails.getOsName() == "LINUX")
		_data = Tools::runCmd("");
	if(_hostDetails->getOsName() == "WINDOWS")
		_data = Tools::runCmd("");
	this->id = Tools::computeMd5(_data);
}

void Bot::setId(string id) { this->id = id; }

void Bot::setUrl(string url) { this->url = url; }

void Bot::setPwd(string pwd) { this->pwd = pwd; }

void Bot::setStatus(string status) { this->status = status; }

void Bot::sethostNetParams(HostNetParams hostNetParams) { this->hostNetParams = hostNetParams; }

void Bot::setSleepCycle(unsigned int sleepCycle) { this->sleepCycle = sleepCycle; }

void Bot::setSleepCycleRandomness(unsigned int sleepCycleRandomness) { this->sleepCycleRandomness = sleepCycleRandomness; }

string Bot::getId() { return this->id; }

string Bot::getUrl() { return this->url; }

string Bot::getPwd() { return this->pwd; }

string Bot::getStatus() { return this->status; }

HostNetParams Bot::gethostNetParams() { return this->hostNetParams; } 

unsigned int Bot::getSleepCycle() { return this->sleepCycle; }

unsigned int Bot::getSleepCycleRandomness() { return this->sleepCycleRandomness; }


#endif