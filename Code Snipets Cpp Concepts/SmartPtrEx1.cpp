#include<iostream>
using namespace std;
namespace  smartptr{

	class MyWrapper {
		int* data;
	public:
		explicit MyWrapper(int* p = nullptr) :data(p) {}
		void get() {
			cout << *data;
		}
		void* operator->() {
			return data;
		}
		~MyWrapper()
		{
			cout << "dtor is called\n";
		}
	};
	int main() {

		MyWrapper mw = MyWrapper(new int(10));
		mw.get();
		return 0;

	}
}