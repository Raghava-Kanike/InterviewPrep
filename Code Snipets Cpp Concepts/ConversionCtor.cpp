#include<iostream>
using namespace std;
namespace conversionCtor {
	class A {
		int _x;
		int _y;

	public:
		A() :_x(0), _y(0)
		{
			cout << "default ctor " << _x << " " << _y << '\n';
		}
		A(int x) :_x(x) {
			cout << " single parametre: " << _x << '\n';
		}
		A(int x, int y) :_x(x), _y(y) {
			cout << " mul parametre: " << _x << " " << _y << '\n';
		}


	};
	int main() {

		A a;
		// Single parameter conversion constructor is invoked. 
		A a1 = 10;
		// Multiple parameterized conversion constructor is invoked. 
		A a3 = { 30,40 };


		A a2{ 10, 20 };

		A a4 = A(50, 60);


		return 0;
	}
}