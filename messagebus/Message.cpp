#include "Message.h"

//Constructor
	Message::Message(const string Event){

		messageEvent = Event;
		}

//Destructors
	Message::~Message(){}

//Gets
	string Message::GetEvent () {

		return messageEvent;
	};
