#ifndef __LLN__
#define __LLN__
#include <iostream>
#include <cstdlib>
#include <string>
#include "LLN.h"

using namespace std;

class LLN;

class LL {
private:
	LLN *head;
public:
	LLN * getHead();
	void setHead();
};

#endif //__LLN__