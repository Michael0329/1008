//message.cpp
#include <iostream>
#include "Message.h"
using namespace std;

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
