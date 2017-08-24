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
	void addReceiver (function<void (Message)> messageReceiver);
	void sendMessage (Message message);
	void Notify();

private:
	vector<function<void (Message)>> receivers;
	queue<Message> messages;

};