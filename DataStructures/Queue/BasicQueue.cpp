#include<iostream>
#include<string>
using namespace std;
/// <summary>
/// Queue ADT
/// enqueue
/// dequeue
/// list
/// isEmpty
/// release
/// </summary>
struct StudentDetails {
	string name;
	int id;
	StudentDetails* next;
};
class Queue {
	StudentDetails* front, * rear;
	StudentDetails* createStudent(string name, int id) {
		return new StudentDetails{ name,id,NULL };
	}
	void release(StudentDetails* par) {
		cout << "release " << par->name << '\n';
		delete par;
	}
	bool isEmpty() {
		return front == NULL;
	}
	void addQ(StudentDetails* stud) {
		if (front == NULL)
			front = stud;
		else
			rear->next = stud;
		rear = stud;
	}
public:
	Queue():front(NULL),rear(NULL)
	{
		
	}
	void enqueue(string name, int id) {
		StudentDetails* stud = createStudent(name, id);
		addQ(stud);
	}
	void enqueue(StudentDetails* stud) {
		addQ(stud);
	}
	void dequeue() {
		if (front == NULL)
			cout << "Queue is empty\n";
		else if (front == rear) {
			release(front);
			front=rear = NULL;
		}
			
		else {
			StudentDetails* temp = front;
			front = front->next;
			release(temp);
		}
	}
	void List() {
		//cout << "front" << front<<'\n';
		if (!isEmpty()) {
			StudentDetails* trav = front;
			while (trav != NULL) {
				cout << trav->name << "  " << trav->id << '\n';
				trav = trav->next;
			}

		}
		else
			cout << "Queue is Empty..\n";

	}
	~Queue() {
		StudentDetails* trav = NULL;
		cout << "---------------\n";
		while (front != NULL) {
			trav = front;
			front = front->next;
			//trav->next = NULL;
			release(trav);
			
		}
	}

};
int main() {
	Queue q;
	//q.List();
	StudentDetails* s1 = new StudentDetails{ "Racky",11 };
	q.enqueue(s1);
	q.enqueue("Light", 22);
	q.enqueue("Near", 33);
	q.List();
	q.dequeue();
	
	q.List();

	return 0;
}

