#include<iostream>
using namespace std;
namespace namespace2 {
	namespace ns1 {

		void fun() {


			cout << "inside ns1\n";
		}
	}
	namespace ns2 {

		void fun() {


			cout << "inside ns2\n";
		}
	}

	using namespace ns1;
	int main() {

		fun();
		ns2::fun();

		return 0;
	}



}