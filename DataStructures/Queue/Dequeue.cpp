#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// ADT for Dequeue 
/// pushfront
/// pushlast
/// popfront
/// poplast
/// List()
/// Reverse
/// </summary>
namespace Dequeue {
	struct EmpDetails {

		string name;
		int salary;
		EmpDetails* next;

	};
	class Dequeue
	{
		EmpDetails* head;
		EmpDetails* tail;
		EmpDetails* createEmp(string name, int salary) {
			return new EmpDetails{ name,salary,NULL };

		}
		void release(EmpDetails* var) {
			cout << "release  :" << var->name << '\n' << endl;
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
		Dequeue() :head(NULL), tail(NULL) {
		}


		void pushLast(string name, int salary) {

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

		void pushFront(string name, int salary) {

			EmpDetails* temp = createEmp(name, salary);
			if (head == NULL) {
				tail = temp;
			}
			else {
				temp->next = head;
			}
			head = temp;


		}


		void popFront() {
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
		void popLast() {
			if (head != NULL) {
				if (head == tail)
					popFront();
				else {
					EmpDetails* trav = head;
					while (trav->next->next != NULL)//stop a node ahead of target
						trav = trav->next;
					release(trav->next);
					tail = trav;
					trav->next = NULL;



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
		void first() {

			if (head == NULL) {
				cout << "queue is empty\n";
			}
			else {
				cout << "front element is :" << head->name << "---" << head->salary << '\n';
			}
		}
		void last() {
			if (tail != NULL)
				cout << "last element is :" << tail->name << "---" << tail->salary << '\n';
			else
				cout << "queue is empty\n";
		}

		void recursionRev() {

			reverseWithRecursive(NULL, head);
		}


		void reverseWithoutRec() {

			head = reverse(head);

		}




		~Dequeue() {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			EmpDetails* temp = NULL;
			while (head != NULL) {
				temp = head;
				head = head->next;
				release(temp);
			}

		}

	};

	int main() {

		Dequeue dq;
		dq.pushFront("Raghava", 1112);
		dq.pushLast("Light", 77);
		dq.pushFront("Near", 667);
		dq.list();
		dq.first();
		dq.last();
		dq.pushFront("yagami", 99);
		dq.list();
		dq.popFront();
		dq.popLast();
		//dq.recursionRev();
		//dq.list();


		return 1;
	}
}