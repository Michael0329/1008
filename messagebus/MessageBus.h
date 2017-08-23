#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include "Message.h"
using namespace std;

class MessageBus
{
public:
	MessageBus();
	~MessageBus();
	void AddReceiver (function<void (Message)> messageReceiver);
	void SendMessage (Message message);
	void Notify();

private:
	vector<function<void (Message)>> receivers;
	queue<Message> messages;

};