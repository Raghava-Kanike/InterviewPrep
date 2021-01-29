#include<iostream>
using namespace std;
namespace SmartPointer {
	class student {

	private:
		int _id;
		string _name;
	public:
		explicit student(int id, string name) :_id(id), _name(name)
		{

		}
		~student() {
			cout << "dtor called" << '\n';
		}
		void display() {
			cout << _id << "  " << _name << '\n';
		}
	};

	class MySmartWrapper {
		student* sptr;

	public:
		explicit MySmartWrapper(student* ptr = nullptr) :sptr(ptr)
		{

		}
		~MySmartWrapper()
		{
			delete sptr;
		}

		student* operator->() {
			return sptr;
		}

	};
	int main()
	{
		//student *s = new student(1, "rj");
		//s->display();
		//delete s;
		MySmartWrapper msw = MySmartWrapper(new student(1, "rj"));
		MySmartWrapper msw1 = MySmartWrapper(new student(2, "kj"));
		msw->display();
		msw1->display();
		return 0;
	}
}