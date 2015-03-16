#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class LLN {
private:
	LLN * next;
	string data;
public:
	LLN * getNext();
	void setNext(LLN * node);
	
};