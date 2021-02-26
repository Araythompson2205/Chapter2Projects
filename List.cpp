#include "List.h"
#include <iostream>
#include <cstdlib>
#include "employee.h"
using namespace std;
	list::list() : head(NULL), tail(NULL) {}
	void list::addItem(Employee& newObj) {

			listNode* temp = new listNode;
			temp->obj = newObj;         
			temp->next = NULL;
			
			if (head == NULL) {
				head = temp;
				tail = temp;
			}
			else {
				tail->next = temp;
				tail = tail->next;

			}
		
	
	}
	double list::getNodeContents(int index) const {// needs re-writings it something that searches entire list
		listNode* temp = head;						// and outputs by status
		if (temp->next != NULL) {
			for (int i = 0; i <= index; i++) {
				if (i == index) {
					return temp->num;
				}
				else {
					temp = temp->next;
				}

			}

		}
	}
	//double list::getLast()const { //probably not needed
	//	listNode* temp = tail;
	//	return temp->num;

	//}
	void list::deleteLast() {


		if (head == NULL) {
			return;
		}
		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}
		listNode* temp = head;
		while (temp->next && temp->next->next != NULL) {
			temp = temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
	ostream& operator <<(ostream& outs, list& obj) {
		listNode* temp = obj.head;
		while (temp != NULL) {
			cout << '\n' << temp->obj.getStatus() << '\n';
			cout << '\n' << temp->obj.getName() << '\n';
			cout << '\n' << temp->obj.getId() << '\n';
			cout << '\n' << temp->obj.getStartDate() << '\n';
			cout << '\n' << temp->obj.getEndDate() << '\n';
			
			temp = temp->next;
		}

		return outs;
	}
