#include<iostream>
using namespace std;
namespace inlineFun {
	inline int add(int x, int y) {
		return x + y;
	}


	int main()
	{


		cout << add(10, 20);
		return 1;
	}
};