#include<iostream>
using namespace std;
namespace funtor1 {
	class Mul {
		int _a;
	public:
		Mul() {}
		Mul(int a) :_a(a) {}

		int 	operator()(int x) {
			return x * _a;
		}

	};
	int main() {
		Mul m(12);
		cout << m(2) << endl;
		cout << m(3) << endl;

		return 0;
	}
}