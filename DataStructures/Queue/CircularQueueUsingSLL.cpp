#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// ADT for LINKED LIST
/// Append
/// Prepend
/// insertAtPos
/// Delete(first,last,Atpos)
/// List()
/// Reverse
/// </summary>

struct EmpDetails {

	string name;
	int salary;
	EmpDetails* next;

};
class CircularQueue
{
	EmpDetails* head;
	EmpDetails* tail;
	EmpDetails* createEmp(string name, int salary) {
		return new EmpDetails{ name,salary,NULL };
	}
	

public:
	CircularQueue() :head(NULL), tail(NULL)
	{

	}
	void append(string name, int salary) {
		EmpDetails* newNode = createEmp(name, salary);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
			tail->next = head;

		}
		else {
			newNode->next = head;
			tail->next = newNode;
			tail = newNode;
		}
		
		

	}

	void prepend(string name, int salary) {
		EmpDetails* newNode = createEmp(name, salary);
		if (head == NULL) {
			
			append(name, salary);
		
		}
		else {
			newNode->next = head;
			head = newNode;
			tail->next = head;
			
		}
		
	


	}
	void insertAtPos(string name, int salary, int index) {
		if (index < 1) {
			cout << "enter a vaild index\n";
		}
		else {
			if (1 == index) {
				prepend(name,salary);
			}
			else {
				int count = 0;
				EmpDetails* trav = head;
				for (;trav->next != tail->next;count++, trav = trav->next);
				count++;//lastnode count
				//cout << count;
				if (index > count + 1)
					cout << "wng pos\n";
				else if (index == count + 1)
					prepend(name,salary);
				else {
					EmpDetails* trav = head;
					for (int i = 0;i < index - 2;i++, trav = trav->next);
					EmpDetails* newNode = createEmp(name, salary);
					newNode->next = trav->next;
					trav->next = newNode;

				}
			
			}
		}

	}
	void deleteAtPos(int index) {

		if (index < 1)
			cout << "invalid index\n";
		else {
			if (1 == index)
				deleteFirst();
			else {
				EmpDetails* deletableNode = head->next;
				EmpDetails* trav = head;
				int i = 1;
				int count = 0;
				for (EmpDetails* temp = head;temp->next != tail->next;count++, temp = temp->next);
				//cout << "count" << count;
				if (index > count+1) {
					cout << "index is out of bound\n";
				}
				else {
					for (;deletableNode->next != tail->next && i < index - 1;i++,trav = trav->next, deletableNode = deletableNode->next);
					if (deletableNode==tail)
					deleteLast();
					else{
						trav->next = deletableNode->next;
						cout << "deleting.." << deletableNode->name << "\n";
						delete deletableNode;
					}

				}
			}

		}


	}
	void deleteFirst() {
		
		if (head == NULL)
			cout << "list is empty\n";
		else {
			
			if (head == tail) {
				cout << "deleting..." << head->name << '\n';
				delete head;
	
			}
			else {
				EmpDetails* temp = head;

				head = head->next;
				tail->next = head;
				cout << "deleting..." << temp->name << '\n';
				delete temp;
			}
		}

	}
	void deleteLast() {
		if (head == NULL)
			cout << "empty list\n";
		else {
			
			if (head == tail) {
				cout << "deleting..." << head->name << '\n';
				delete head;
			}
			else {
				EmpDetails* trav = head;
				while (trav->next->next != tail->next) {
					trav = trav->next;
				}
				trav->next = head;
				cout << "deleting--" << tail->name << '\n';
				tail = trav;

			}
			
		}
	}
	

	void list() {
		
		EmpDetails* trav = head;
		while (trav->next !=  tail->next) {
			
			cout << trav->name << "--" << trav->salary << '\n';
			trav = trav->next;
		}
		cout << trav->name << "--" << trav->salary << '\n';
	
	}



	void reverseWithoutRec() {

		

	}

	~CircularQueue()
	{
		
			EmpDetails* temp = NULL, * trav = head;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			while (trav->next != tail->next) {
				temp = trav;
				trav = trav->next;
				cout << "releasing..." << temp->name << '\n';
				delete temp;
			}
			cout << "releasing..." << trav->name << '\n';
			delete trav;


	}


};

int main() {
	CircularQueue cq;
	cq.append("a", 11);
	cq.append("bb", 11);
	cq.append("cc", 22);
	cq.prepend("cc11", 2233);
  cq.append("zzz", 2222);
  //cq.list();
 //cq.deleteLast();
	//cq.list();
	//cq.deleteLast();
//	cq.list();
	//cq.deleteFirst();
	cq.list();
	//cq.insertAtPos("ss", 666, 3);
	cq.deleteAtPos(3);
	cq.list();
	




	return 1;
}