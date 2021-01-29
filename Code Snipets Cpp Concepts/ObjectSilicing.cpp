#include<iostream>
using namespace std;
namespace objsilicing {
	class A {
	public:
		int x;
		int y;
		A(int x, int y) :x(x), y(y)
		{

		}
		void display() {
			cout << "base class x:" << x << "y :" << y << endl;
		}

	};
	class B :public  A {
	public:
		int j;
		B(int x, int y, int z) :A(x, y)
		{
			j = z;

		}
		void display() {
			cout << "derived class x: " << x << "y: " << y << "z: " << j << endl;
		}

	};

	int main() {
		A a(10, 20);
		B b(1, 2, 3);
		A a1 = b; //object silcing to prevent it we make base class as abstract or pure virtual means interface
		a.display();
		b.display();
		a1.display();


		return 0;
	}
}