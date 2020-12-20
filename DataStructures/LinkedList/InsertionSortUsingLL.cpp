#include<iostream>
using namespace  std;
struct Node {
	int data;
	Node* next;
	Node(int data):data(data),next(NULL)
	{

	}
};
class InsertonSort {
	Node* head, * tail;
	void	listHelper(Node* cur) {
		if (cur != NULL) {

			cout << cur->data <<" ";
			listHelper(cur->next);
		}
	}
	void printRevHelper(Node* cur) {
		if (cur != NULL) {
			printRevHelper(cur->next);
			cout << cur->data << " ";
		}
	}
public:
	InsertonSort():head(NULL),tail(NULL)
	{
	}

	void add(int data) {
		Node* newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {

			if (newNode->data < head->data) {
				newNode->next = head;
				head = newNode;
			}
			else if (newNode->data > tail->data) {
				tail->next = newNode;
				tail=newNode;
			}
			else {
				Node* trav = head->next;
				while (newNode->data > trav->next->data) {
					trav = trav->next;
				}
				newNode->next = trav->next;
				trav->next = newNode;
							
			}

		}

	}
	

	
	void list() {
		if (head != NULL)
			listHelper(head);
		else
			cout << "empty list";
	}

	void printRev() {
		if (head != NULL) {
			cout << "\n-----REV Print--\n";
			printRevHelper(head);
		}
		else
			cout << "empty list";
	}
	~InsertonSort()
	{
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~\n";
		if (head != NULL) {
			Node* temp = NULL;
			while (head != NULL) {
				temp = head;
				head = head->next;
				cout << "releasing :" << temp->data << "\n";
			}
		}
		else
			cout << "heap is cleared";

	}

};
int main() {
	InsertonSort is;
	is.add(30);
	is.add(22);
	is.add(20);
	is.add(10);
	is.add(8);
	is.add(19);
	is.add(42);
	is.add(39);
	is.add(51);
	is.list();
	
	is.printRev();
	return 1;
}