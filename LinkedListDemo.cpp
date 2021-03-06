// Demo of LinkedList
#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main()
{

	// Linked List of type integer
	LinkedList<int> l;

	// add element to front of LinkedList
	l.insertFront(5);
	l.insertFront(10);
	l.insertFront(2);
	l.insertFront(12);
	l.insertFront(19);
	l.insertFront(20);
	l.insertFront(21);

	// print LinkedList
	l.toString();

	// delete element from LinkedList
	l.deleteFront();
	l.deleteFront();

	// again print LinkedList
	l.toString();

	return 0;
}