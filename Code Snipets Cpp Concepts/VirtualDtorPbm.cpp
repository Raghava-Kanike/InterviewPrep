#include<iostream>
using namespace std;
namespace dtorPb {
	class Base
	{
	public:
		Base()
		{
			cout << "base ctor\n";
		}
		~Base()
		{
			cout << "base dtor\n";

		}
	};
	class Derived :public Base {
	public:
		Derived()
		{
			cout << "derived ctor\n";

		}
		~Derived()
		{
			cout << "derived dtor\n";
		}
	};
	int main()
	{
		Derived* d = new Derived;
		Base* b = d;
		delete b;


		return 0;
	}

}