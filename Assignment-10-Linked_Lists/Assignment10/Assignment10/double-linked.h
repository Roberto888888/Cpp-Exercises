#include <iostream>

#ifndef __dll__
#define __dll__


//////////////////////////////////////////////////////////////
// Basic structure to store elements of a list
//////////////////////////////////////////////////////////////

struct Node {
	int val;               // Contains the value
	Node * next;           // Pointer to the next node
	Node * prev;           // Pointer to the previous node
};

///////////////////////////////////////////////////////////////
// Class List
///////////////////////////////////////////////////////////////

class List {
public:
	List(void);            // Constructor
	~List(void);           // Destructor
	void insert(int);      // This should insert n in the list
	void reverse(void);    // This should reverse the list
	void print(void);      // This shoiuld print the list

private:
	Node * first;          // Pointer to the first (if any) node
};

#endif