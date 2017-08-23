#include <iostream>
using namespace std;

class Message {

public:
	
	Message (const string Event);
	~Message ();
	string GetEvent();

private:

	string messageEvent;
}