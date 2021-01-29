#include<iostream>
using namespace std;
namespace friendGlobalFun{
class A {
private:
	int x;
public:
	A():x(220){}

	friend void getA(A& a);
};
void getA(A& a) {
	cout << "A::a " << a.x;
}
int main() {
	A a;
	getA(a);
	return 0;
}
}