/**
*	@author John McCain
* @date 04-18-2016
* @file main.cpp
*/

#include <iostream>
#include <vector>
#include <stdexcept>
#include "LinkedList.h"
#include "Node.h"

int main(int argc, char** argv)
{

	int testNo = 0;

	try{
		std::cout << "**Creating empty LinkedList**" << std::endl;

		LinkedList<int> myLinkedList;

		std::cout << "Test " << ++testNo << ": isEmpty on new LinkedList.  Passed: ";
		std::cout << (myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on new LinkedList. Passed: ";
		std::cout << (myLinkedList.size() == 0) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": search on new LinkedList with no elements.  Passed: ";
		std::cout << (!myLinkedList.search(5)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": removeBack on new, empty LinkedList. Passed: ";
		std::cout << (!myLinkedList.removeBack()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": removeFront on new, empty LinkedList. Passed: ";
		std::cout << (!myLinkedList.removeFront()) << std::endl;

		std::vector<int> myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from new LinkedList.  Passed: ";
		std::cout << (myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from new LinkedList. Passed: ";
		std::cout << (myVector.size() == 0) << "\n\tSize: " << (myVector.size()) << std::endl;


		std::cout << "\n\n**Adding an element (8) to the front of the LinkedList**" << std::endl;
		myLinkedList.addFront(8);

		std::cout << "\nTest " << ++testNo << ": isEmpty on LinkedList with one element.  Passed: ";
		std::cout << (!myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on LinkedList with one element. Passed: ";
		std::cout << (myLinkedList.size() == 1) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": good search for 8 on LinkedList with one element.  Passed: ";
		std::cout << (myLinkedList.search(8)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": bad search on LinkedList with one element.  Passed: ";
		std::cout << (!myLinkedList.search(9)) << std::endl;

		myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from LinkedList.  Passed: ";
		std::cout << (!myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from LinkedList. Passed: ";
		std::cout << (myVector.size() == 1) << "\n\tSize: " << (myVector.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 8 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[0] == 8) << "\n\tvector value at index 0: " << myVector[0] << std::endl;


		std::cout << "\n\n**Adding an element (12) to the front of the LinkedList**" << std::endl;
		myLinkedList.addFront(12);

		std::cout << "\nTest " << ++testNo << ": isEmpty on LinkedList with two elements.  Passed: ";
		std::cout << (!myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on LinkedList with two elements. Passed: ";
		std::cout << (myLinkedList.size() == 2) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": good search for 12 on LinkedList with two elements.  Passed: ";
		std::cout << (myLinkedList.search(12)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": bad search on LinkedList with two elements.  Passed: ";
		std::cout << (!myLinkedList.search(4)) << std::endl;

		myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from LinkedList.  Passed: ";
		std::cout << (!myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from LinkedList. Passed: ";
		std::cout << (myVector.size() == 2) << "\n\tSize: " << (myVector.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 12 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[0] == 12) << "\n\tvector value at index 0: " << myVector[0] << std::endl;


		std::cout << "\n\n**Adding an element (-3) to the back of the LinkedList**" << std::endl;
		myLinkedList.addBack(-3);

		std::cout << "\nTest " << ++testNo << ": isEmpty on LinkedList with three elements.  Passed: ";
		std::cout << (!myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on LinkedList with three elements. Passed: ";
		std::cout << (myLinkedList.size() == 3) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": good search for -3 on LinkedList with three elements.  Passed: ";
		std::cout << (myLinkedList.search(-3)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": bad search on LinkedList with three elements.  Passed: ";
		std::cout << (!myLinkedList.search(-12)) << std::endl;

		myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from LinkedList.  Passed: ";
		std::cout << (!myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from LinkedList. Passed: ";
		std::cout << (myVector.size() == 3) << "\n\tSize: " << (myVector.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 12 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[0] == 12) << "\n\tvector value at index 0: " << myVector[0] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 8 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[1] == 8) << "\n\tvector value at index 1: " << myVector[1] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for -3 to be at back of vector from LinkedList.  Passed: ";
		std::cout << (myVector[2] == -3) << "\n\tvector value at index 2: " << myVector[2] << std::endl;


		std::cout << "\n\n**Adding an element (19) to the back of the LinkedList**" << std::endl;
		myLinkedList.addBack(19);

		std::cout << "\nTest " << ++testNo << ": isEmpty on LinkedList with four elements.  Passed: ";
		std::cout << (!myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on LinkedList with four elements. Passed: ";
		std::cout << (myLinkedList.size() == 4) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": good search for 19 on LinkedList with four elements.  Passed: ";
		std::cout << (myLinkedList.search(19)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": bad search on LinkedList with four elements.  Passed: ";
		std::cout << (!myLinkedList.search(-12)) << std::endl;

		myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from LinkedList.  Passed: ";
		std::cout << (!myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from LinkedList. Passed: ";
		std::cout << (myVector.size() == 4) << "\n\tSize: " << (myVector.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 12 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[0] == 12) << "\n\tvector value at index 0: " << myVector[0] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 8 to be second to front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[1] == 8) << "\n\tvector value at index 1: " << myVector[1] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for -3 to be second to back of vector from LinkedList.  Passed: ";
		std::cout << (myVector[2] == -3) << "\n\tvector value at index 2: " << myVector[2] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 19 to be at back of vector from LinkedList.  Passed: ";
		std::cout << (myVector[3] == 19) << "\n\tvector value at index 2: " << myVector[3] << std::endl;


		std::cout << "\n\n**Removing the back element of the LinkedList**  Success: " << myLinkedList.removeBack() << std::endl;

		std::cout << "\nTest " << ++testNo << ": isEmpty on LinkedList with three elements.  Passed: ";
		std::cout << (!myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on LinkedList with three elements. Passed: ";
		std::cout << (myLinkedList.size() == 3) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": good search for -3 on LinkedList with three elements.  Passed: ";
		std::cout << (myLinkedList.search(-3)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": bad search for 19 on LinkedList with three elements.  Passed: ";
		std::cout << (!myLinkedList.search(19)) << std::endl;

		myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from LinkedList.  Passed: ";
		std::cout << (!myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from LinkedList. Passed: ";
		std::cout << (myVector.size() == 3) << "\n\tSize: " << (myVector.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 12 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[0] == 12) << "\n\tvector value at index 0: " << myVector[0] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 8 to be in middle of vector from LinkedList.  Passed: ";
		std::cout << (myVector[1] == 8) << "\n\tvector value at index 1: " << myVector[1] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for -3 to be at back of vector from LinkedList.  Passed: ";
		std::cout << (myVector[2] == -3) << "\n\tvector value at index 2: " << myVector[2] << std::endl;


		std::cout << "\n\n**Removing the front element of the LinkedList**  Success: " << myLinkedList.removeFront() << std::endl;

		std::cout << "\nTest " << ++testNo << ": isEmpty on LinkedList with two elements.  Passed: ";
		std::cout << (!myLinkedList.isEmpty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size on LinkedList with two elements. Passed: ";
		std::cout << (myLinkedList.size() == 2) << "\n\tSize: " << (myLinkedList.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": good search for 8 on LinkedList with two elements.  Passed: ";
		std::cout << (myLinkedList.search(8)) << std::endl;

		std::cout << "\nTest " << ++testNo << ": bad search for 12 on LinkedList with two elements.  Passed: ";
		std::cout << (!myLinkedList.search(12)) << std::endl;

		myVector = myLinkedList.toVector();

		std::cout << "\nTest " << ++testNo << ": empty() on vector from LinkedList.  Passed: ";
		std::cout << (!myVector.empty()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": size() on vector from LinkedList. Passed: ";
		std::cout << (myVector.size() == 2) << "\n\tSize: " << (myVector.size()) << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for 8 to be at front of vector from LinkedList.  Passed: ";
		std::cout << (myVector[0] == 8) << "\n\tvector value at index 0: " << myVector[0] << std::endl;

		std::cout << "\nTest " << ++testNo << ": check for -3 to be at back of vector from LinkedList.  Passed: ";
		std::cout << (myVector[1] == -3) << "\n\tvector value at index 1: " << myVector[1] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "An exception occurred on test: " << testNo << "\n"<< e.what() << std::endl;
	}

	return 0;
}
