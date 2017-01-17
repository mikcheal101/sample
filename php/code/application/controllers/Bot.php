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
}
?>