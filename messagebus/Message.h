#ifndef MESSAGE_H_
#define MESSAGE_H_
#include <iostream>
using namespace std;

class Message {

public:
	
	Message (const string Event);
	~Message ();
	string GetEvent();

private:

	string messageEvent;
};

#endif