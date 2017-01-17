<?php

class Bot extends CI_Controller {

	protected $data = array();

	public function __construct() {
		parent::__construct();
	}

	#	@route 	bots/get-all
	public function get_all() {}

	#	@route 	bots/get-logs/(:any)
	public function get_logs($param) {

	}

	#	@route 	bots/install-file
	public function install_file() {

	}

	# 	@route 	response/authentication
	public function login() {}

	# 	@route 	response/bot-details
	public function bot_details() {}

	# 	@route 	response/command-response
	public function command_response() {}

	# 	@route 	response/command
	public function get_command() {}


	/*
	 db structure
		- bot 
			- id string
			- network_details
				- interface_name: string
				- ip_address: string
				- broadcast_address: string
				- subnet_mask: string
				- gateway_address: string
			- status: STATUS
			- host_url: string 
			- sleep_cycle: int = 10
			- sleep_cycle_randomness: int =5
			- os
				- name: string
				- version: string
				- type: string
				- arch: string
				- username string

		- user
			- id: int
			- username: string
			- password: string

	*/

}
?>