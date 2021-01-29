#include<iostream>
#include<memory>
using namespace std;

class student {

private:
	int _id;
	string _name;
public:
	explicit student(int id, string name) :_id(id), _name(name)
	{

	}
	void setid(int id) {
		_id = id;
	}
	~student() {
		cout << "dtor called" << '\n';
	}
	void display() {
		cout << _id << "  " << _name << '\n';
	}
};

int main() {
	shared_ptr<student> s1(new student(1, "a"));
	cout << s1.use_count() << '\n';
	shared_ptr<student> s2 = s1;
	cout << s1.use_count() << '\n';
	//s1->display();
	//s1->setid(10);
	//s2->display();
	//s1->display();
	shared_ptr<student> s3(new student(111, "avc"));
	cout << s3.use_count() << '\n';





	return 0;
}