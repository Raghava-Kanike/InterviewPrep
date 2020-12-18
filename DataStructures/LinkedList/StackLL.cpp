#include<iostream>
#include<string>
using namespace std;
struct EmpDetails {

	string name;
	int salary;
	EmpDetails* next;
};
class EmpFactory {

	
public:
	
	static EmpDetails* createEmp(string name, int salary) {
		return new EmpDetails{ name,salary,NULL };
	}

	void static  release(EmpDetails* temp) {
		cout << "release " << temp->name << '\n';
		delete temp;
	}
};

class StackLL {
	EmpDetails* head;
	bool isEmpty() {
		return head == NULL;
	}
public:

	StackLL():head(NULL)
	{
			
	}
	void push(EmpDetails *emp) {
		emp->next = head;
		head = emp;

	}

	void pop() {

		if (!isEmpty()) {

			EmpDetails* temp = head;
			head = head->next;
			EmpFactory::release(temp);

		}
		else
			cout << "list empty\n";
	}
	void peek() {
		if (!isEmpty()) {
			cout<< head->name<<" "<<head->salary<<'\n';
		}
		else
			cout << "list empty\n";

	}
	void list() {
		if (!isEmpty()) {
			EmpDetails* temp = head;
			while (temp!=NULL)
			{
				cout << temp->name << " " << temp->salary << '\n';
				temp = temp->next;
				
			}
		}
		else
			cout << "list empty\n";
		
	}

	~StackLL(){
		EmpDetails* temp = NULL;
		while (head!=NULL)
		{
			temp = head;
			head = head->next;
			EmpFactory::release(temp);

		}

	}


};
int main() {
	StackLL sll;
	EmpDetails* e1 = EmpFactory::createEmp("Light", 1000);
	EmpDetails* e2 = EmpFactory::createEmp("Yagami", 2000);
	EmpDetails* e3 = EmpFactory::createEmp("L", 3000);
	EmpDetails* e4 = EmpFactory::createEmp("RakuZaki", 4000);
	EmpDetails* e5 = EmpFactory::createEmp("N", 5000);
	sll.list();//empty
	sll.push(e1);
	sll.push(e2);
	sll.push(e3);
	sll.list();
	sll.pop();
	sll.push(e4);
	sll.push(e5);


}