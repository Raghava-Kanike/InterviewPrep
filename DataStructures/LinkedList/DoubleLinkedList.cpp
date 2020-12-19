#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* prev;
	Node* next;

	Node(int data):data(data),prev(NULL),next(NULL){ }

};
class DoubleLinkedList {
	Node* head;
	Node* tail;
public:
	DoubleLinkedList():head(NULL),tail(NULL)
	{
			
	}

	void append(int data) {
		Node* newNode = new Node{ data };
		if (head == NULL)
		{
			head = newNode;
			
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			
		}

		tail = newNode;
	}
	void prepend(int data) {
		Node* newNode = new Node{ data };
		if (head == NULL) {
 
			tail = newNode;
			
		}
		else {
			head->prev = newNode;
			newNode->next = head;
		}
		head = newNode;
	}
	void insertAtPos(int data, int index) {
		if (index < 1) {
			cout << "enter a valid index";
		}
		else {
			if (1 == index)
				prepend(data);
			else {
				int count = 0;
				Node* trav = NULL;
				for (trav = head;trav != NULL;trav = trav->next, count++);
				if (index > count + 1)
					cout << "wrong index\n";
				else if (index == count + 1)
					append(data);
				else {
					Node* newNode = new Node{ data };
					Node* trav = head;
					for (int i = 0;i < index - 2;i++, trav = trav->next);
					newNode->next = trav->next;
					trav->next = newNode;
					newNode->prev = trav;
					newNode->next->prev = newNode;


				}


			}
		}
	}
	void deleteFirst() {
		if (head == NULL)
			cout << "list is empty";
		else {
			Node* temp = head;
			head = head->next;
			if (head == NULL)
				tail = NULL;
			else
				head->prev = NULL;
		
			cout << "deleted... " << temp->data << '\n';
			delete temp;

		}


	}
	void deleteLast() {
		if (tail == NULL)
			cout << "list empty..\n";
		else {
			Node* temp = tail;
			tail = tail->prev;
			if (tail == NULL)
				head = NULL;
			else
				tail->next = NULL;

			cout << "deleted... " << temp->data << '\n';
			delete temp;
		}

	}
	void deleteAtPos(int index) {
		if (index < 1)
			cout << "invalid index";
		else {
			if (1 == index)
				deleteFirst();
			else {
				Node* deletabelNode = head->next;
				Node* trav = head;
				for (int i = 1;deletabelNode != NULL && i < index-1 ;i++,trav = trav->next, deletabelNode = deletabelNode->next);
				if (deletabelNode == NULL)
					cout << "wrong pos";
				else if (deletabelNode == tail)
					deleteLast();
				else {

					trav->next = deletabelNode->next;
					deletabelNode->next->prev = trav;
					deletabelNode->next = deletabelNode->prev = NULL;
					cout << "deleted..." << deletabelNode->data << '\n';
					delete deletabelNode;



				}
			}
		}
	}
	void reverseList() {

		Node* cur, * temp;
		cur = head;
		while (cur != NULL) {
			temp = cur->next;
			cur->next = cur->prev;
			cur->prev = temp;

			cur = temp;
		}
		//temp = head;
		//head = tail;
		//tail = temp;
		swap(head, tail);
	}
	
	void list(bool flag = true) {
		if (head == NULL)
			cout << "empty list\n";
		else {
			if (flag) {
				Node* trav = head;
				cout << "\n------------------------\n";
				while (trav != NULL) {
					cout << trav->data << '\t';
					trav = trav->next;
				}
				cout << "\n------------------------\n";
			}
			else {
				Node* travRev = tail;
				cout << "\n------------------------\n";
				while (travRev != NULL) {
					cout << travRev->data << '\t';
					travRev = travRev->prev;
				}
				cout << "\n------------------------\n";
			}

		}
	}
	~DoubleLinkedList()
	{
		cout << "~~~~~~~~~~~~~~\n";
		Node* temp = NULL;
		while (head != NULL) {
			temp = head;
			head = head->next;
			cout << "deleting " << temp->data << '\n';
			delete temp;
		}


	}

};
int main() {
	DoubleLinkedList dll;
	dll.append(10);
	dll.append(20);
	dll.list();
	dll.prepend(30);
	dll.append(44);
	dll.append(55);
	dll.list();

	dll.reverseList();
	//cout << "rev---\n";
	//dll.list(false);
	//dll.deleteLast();
	//dll.deleteAtPos(2);
	dll.list();
	return 0;
}