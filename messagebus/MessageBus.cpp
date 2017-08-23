#include "MessageBus.h"

//Constructor
	MessageBus::MessageBus(){};

//Destructor
	MessageBus::~MessageBus(){};

//Add Receiver to the List (FIFO)
	void MessageBus::AddReceiver (function<void (Message)> messageReceiver){
		receivers.push_back (messageReceiver);
	}

//Send Message to Message List
	void MessageBus::SendMessage (Message message){
		messages.push (message);
	}

//Notify Entities
	void MessageBus::Notify () {
		while (!messages.empty()){
            for (auto iter = receivers.begin(); iter != receivers.end(); iter++) {
                (*iter)(messages.front());
         	   }
         	messages.pop();
			}
		}
		