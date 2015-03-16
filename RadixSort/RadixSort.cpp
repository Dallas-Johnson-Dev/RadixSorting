// RadixSort.cpp : Defines the entry point for the console application.
//Dallas Johnson
//Radix sorts a linked list using recursion only, every method is recursive.

#include <iostream>
#include <cstdlib>
#include <string>
#include "RadixSort.h"

using namespace std;

int main(int argc, char** argv[])
{
	str_input();
	return 0;
}

void str_input() {
	string input;
	cout << ">: ";
	getline(cin, input);
	if (input != "") {
		cout << input << endl;
		str_input();
	}
}

