/**
*	@author John McCain
* @date 04-18-2016
* @file main.cpp
*/

#include <iostream>
#include "LinkedList.h"
#include "Node.h"

int main(int argc, char** argv)
{
	LinkedList<int> myLinkedList;

	std::cout << "Test 1: isEmpty on new LinkedList.  Passed: ";
	std::cout << (myLinkedList.isEmpty()) << std::endl;

	std::cout << "Test 2: size on new LinkedList. Passed: ";
	std::cout << (myLinkedList.size() == 0) << std::endl;
	std::cout << (myLinkedList.size()) << std::endl;


	return 0;
}
