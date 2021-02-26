#pragma once
#include <iostream>
#include <cstdlib>
#include "employee.h"
#ifndef LIST_H
#define LIST_H
using namespace std;

	struct listNode {
		Employee& obj;
		listNode* next;
	};
	class list {
	private:
		listNode* head, * tail;
	public:
		//Precondition:N/A
		//Postcondition:Creates a list
		list();
		//precondition:A double list with any amount of nodes. (not 0 nodes. please dont use with 0 nodes)
		//postcondition:returns the value of num in the last node in the list
		double getLast() const;
		//precondition: a  list with at least one node(Please really do not call this on an empty list)
		//postcondition:removes the last node in the list
		void deleteLast();
		//precondition: any list with any number of nodes
		//postcondition:returns the number of nodes in the list
		double getNodeContents(int index) const;
		//precondition: any list, empty or not.
		//postcondition:adds a node with value of 'newDouble' at the end of the list
		void addItem(Employee& obj);
		//precondition: a list with any amount of nodes
		//postcondition: if 'listSize' is equal to 'maxSize' returns true
		
		friend ostream& operator <<(ostream& outs, list& obj);

	};

#endif 