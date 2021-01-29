#include<iostream>
using namespace std;
namespace VirtualFun {
	class Base
	{
	public:
		virtual void print() {
			cout << "base print\n";
		}
		void show() {
			cout << "base show\n";
		}


	};
	class Derived :public Base {
	public:
		void print() {
			cout << "derived print\n";
		}
		void show() {
			cout << "derived show\n";
		}

	};
	int main() {

		Derived d;
		d.show();
		d.print();
		Base b;
		b.print();
		b.show();
		Base* ptr = &d;
		ptr->print();
		ptr->show();

		return 0;
	}
}