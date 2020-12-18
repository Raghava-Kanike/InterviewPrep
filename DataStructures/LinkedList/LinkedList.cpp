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
class LinkedList 
{
	EmpDetails* head;
	EmpDetails* tail;
	EmpDetails* createEmp(string name, int salary) {
		return new EmpDetails{ name,salary,NULL };

	}
	 void release(EmpDetails* var) {
		 cout << "release  :" << var->name<<'\n'<<endl;
		 delete	 var;

	}
	 EmpDetails* reverse(EmpDetails* cur) {

		 EmpDetails* prev = NULL;
		 EmpDetails* nextNode = NULL;
		 while (cur != NULL) {
			 nextNode = cur->next;
			 cur->next = prev;
			 prev = cur;
			 cur = nextNode;

		 }
		 return prev;

	 }
	 void reverseWithRecursive(EmpDetails* prev, EmpDetails* curr) {
		 if (curr != NULL) {

			 reverseWithRecursive(curr, curr->next);
			 curr->next = prev;
		 }
		 else {
			 head = prev;

		 }


	 }

public:
	LinkedList() :head(NULL), tail(NULL) {
	}


	void append(string name,int salary) {

		EmpDetails* temp = createEmp(name, salary);
		if (head == NULL) {
			head = temp;
		}
		else 
		{
			tail->next = temp;
		}
		tail = temp;
	}

	void prepend(string name, int salary) {
	
		EmpDetails* temp = createEmp(name, salary);
		if (head == NULL) {
			tail = temp;
		}
		else {
			temp->next = head;
		}
		head = temp;

		
	}
	void insertAtPos(string name, int salary, int index) {
		if (index < 1)
			cout << "enter a vaild index\n";
		else {
			if (1 == index)
				prepend(name, salary);
			else {
				int count = 0;
				EmpDetails* trav = NULL;
				for (trav = head;trav != NULL;count++,trav = trav->next);
				cout << count<<'\n';
				if (index > count+1)
					cout << "pos out of count\n";
				else if (index == count + 1)
					append(name, salary);
				else {
				
					EmpDetails* trav = head;
					for (int i = 0;i < index - 2;i++, trav = trav->next);
					EmpDetails* temp = createEmp(name, salary);
					temp->next = trav->next;
					trav->next = temp;
	
				}

				}
		}

	}
	void deleteAtPos(int index) {

		if (head == NULL)
			cout << "list is empty\n";
		else {
			if (1 == index) {
				deleteFirst();
			}
			else {
				EmpDetails* deletableNode = head->next;
				EmpDetails* trav = head;
				int i = 1;
				for (;deletableNode != NULL && i < index - 1;i++, deletableNode = deletableNode->next, trav = trav->next);
				if (deletableNode == NULL)
					cout << "pos is wrong..\n";
				else if (deletableNode == tail)
					deleteLast();
				else {
				
					trav->next = deletableNode->next;
					release(deletableNode);


				
				}
			
			
			}

		
		
		}
	
	
	}
	void deleteFirst() {
		if (head == NULL) {
			cout << "list is empty...\n";
			
		}
		else {
			EmpDetails* temp = head;
			head = head->next;
			release(temp);
			if (head == NULL)
				 tail = NULL;
		}

	}
	void deleteLast() {
		if (head != NULL) {
			if (head == tail)
				deleteFirst();
			else {
				EmpDetails* trav =head;
				while (trav->next->next != NULL)//stop a node ahead of target
					trav = trav->next;
				release(trav->next);
				tail = trav;
				trav->next =NULL;



			}
		}
		else {
		
			cout << "list is empty...\n";
		}
	}

	void list() {
		EmpDetails* temp = head;
		while (temp != NULL) {
		
			cout << temp->name << "---" << temp->salary << "\n" << endl;
			temp = temp->next;


		}

	
	}

	void recursionRev() {
	 
		reverseWithRecursive(NULL, head);
	}

	
	void reverseWithoutRec() {
	
		head = reverse(head);

	}




	~LinkedList() {
		EmpDetails* temp = NULL;
		while (head != NULL) {
			temp = head;
			head = head->next;
			release(temp);
		}
	
	}

};

int main() {
	
	LinkedList ll;
	ll.deleteFirst();
	ll.append("raghava", 33344);
	ll.append("light", 33344);
	ll.append("ryku", 33344);
	ll.list();
	ll.insertAtPos("Yagami", 4455, 4);
	ll.list();
	ll.deleteAtPos(5);
	cout << "________before_______\n";
	ll.list();
	ll.recursionRev();
	cout << "________after_______\n";
	ll.list();
	
	
	

	return 1;
}