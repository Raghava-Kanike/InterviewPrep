#include<iostream>

using namespace std;
namespace funtor2 {

	class Employee {
	private:
		int _id;
		string _name;
		float _salary;

	public:
		Employee(int id, string name, float sal) :_id(id), _name(name), _salary(sal) {}


		void operator()(float per) {

			this->_salary += this->_salary * per;

		}

		Employee operator()(Employee const& e) {

			if (this->_salary > e._salary)
				return *this;
			else
				return e;
		}

		void display() {

			cout << this->_id << " " << this->_name << " " << this->_salary << "\n";
		}



	};
	int main() {

		Employee e1(101, "Raj", 10000);
		Employee e2(102, "shyam", 15000);
		e1.display();
		e2.display();

		e1(0.05);
		e2(0.07);

		e1.display();
		e2.display();


		e1(e2).display();


		return 0;


	}
}