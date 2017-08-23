//message.cpp
#include <iostream>
using namespace std;

//Constructor
	Message::Message(const string Event){

		messageEvent = Event;
		}

//Destructor
	Message::~Message();

//Gets
	string Message::GetEvent () {

		return messageEvent;
	}
