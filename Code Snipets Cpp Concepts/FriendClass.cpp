#include<iostream>
using namespace std;

namespace FriendClass{
class A {
private:
	int a;
public:
	A() :a(10) {

	}
	friend class B;
};

class B {
private:
		int b;
public:
	B():b(20){}

	void showA(A& x) {
		cout << "A::a is" << x.a;
	}

	void display() {
		cout << "B value: " << b << '\n';
		
	}
};
int main() {
	A a;
	B b;
	b.display();
	b.showA(a);
	return 0;
}
}
	 
