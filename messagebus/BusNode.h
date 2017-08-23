#include <iostream>
#include <functional>
#include "Message.h"
using namespace std;

class BusNode
{
public:

//Constructor
	BusNode(MessageBus *messageBus);

//Destructor
	~BusNode();
	
	virtual void update ();

protected:

	MessageBus *messageBus;

//Get's object OnNotify
	function <void (Message)> getNotifyFunc();

//Send message
	void sendMessage (Message message);

//Action to do when notified
	virtual void onNotify (Message message);

};