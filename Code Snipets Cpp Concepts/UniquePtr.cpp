#include<iostream>
#include<memory>
using namespace std;
namespace uniqueptr {
	class student {

	private:
		int _id;
		string _name;
	public:
		explicit student(int id, string name) :_id(id), _name(name)
		{

		}
		~student() {
			cout << "dtor called" << '\n';
		}
		void display() {
			cout << _id << "  " << _name << '\n';
		}
	};
	int main()
	{
		unique_ptr<student> up1(new student(1, "abc"));
		up1->display();
		unique_ptr<student> up2(new student(2, "xyz"));
		up2->display();

		return 0;
	}
}