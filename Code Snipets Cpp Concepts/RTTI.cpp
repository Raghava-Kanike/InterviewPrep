#include<iostream>
using namespace std;
namespace rtti {
	//RTTI(runtime type information) is a mechanism that exposes information 
	//about an object’s data type at runtime and is available only for the classes 
	//which have at least one virtual function.
	class A {};

	class B :public A {
	
	};

	class C {
		virtual void fun() {}
	};
	class D :public C {

	};

	int main() {
		
		A* a = new B();
		//B* b = dynamic_cast<B*>(a);//fails bcz no virtual fun class A

		C* c = new D();//upcasting
		D* d = dynamic_cast<D*>(c); //downcasting

		if (d != NULL) {
			cout << "casted\n";
		}
		else {
			cout << "NOT casted";
		}


		return 0;
	}
}