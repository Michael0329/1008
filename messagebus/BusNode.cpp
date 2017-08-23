#include "BusNode.h"

//Constructor
	BusNode::BusNode(MessageBus *messageBus);

//Destructor
	BusNode::~BusNode();
	
	virtual void BusNode::update ();

protected:

	MessageBus *messageBus;

//Get's object OnNotify
	function <void (Message)> BusNode::getNotifyFunc();

//Send message
	void BusNode::sendMessage (Message message);

//Action to do when notified
	virtual void BusNode::onNotify (Message message);
};