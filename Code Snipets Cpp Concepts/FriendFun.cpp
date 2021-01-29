#include<iostream>
using namespace std;
namespace friendfun {
	class A;
	class B {
	public:
		void getA(A& a);
	};
	class A {
	private:
		int x;
	public:
		A() :x(10) {}

		friend void B::getA(A& a);
	};

	void  B::getA(A& a) {

		cout << a.x << endl;

	}


	int main() {

		A a;
		B b;
		b.getA(a);
		return 0;
	}
}