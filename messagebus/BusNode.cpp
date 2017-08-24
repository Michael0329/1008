#include "BusNode.h"

//Constructor
	BusNode::BusNode(MessageBus *messageBus){
		this -> messageBus = messageBus;
		this -> messageBus -> addReceiver(this->getNotifyFunc());
	};

//Destructor
	BusNode::~BusNode(){};
	
	void BusNode::update (){};

//Get's object OnNotify
	function <void (Message)> BusNode::getNotifyFunc(){
		auto messageListener = [=] (Message message) -> void {
			this -> onNotify(message);
		};
		return messageListener;
	};

//Send message
	void BusNode::sendMessage (Message message){
		messageBus -> sendMessage(message);
	};

//Action to do when notified
	void BusNode::onNotify (Message message){};
