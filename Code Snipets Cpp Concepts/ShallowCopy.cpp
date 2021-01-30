#include<iostream>
using namespace std;

namespace ShallowCopy {

	//shallow copy
	class CopyCtor {
	private:
		int _id;
		string _name;
		int* _cmpId;

	public:
		CopyCtor()
		{

			_cmpId = new int();
		}
		void set(int id, string name, int cmpid) {

			_id = id;
			_name = name;
			*_cmpId = cmpid;
		}

		void setValues(int id, string name, int cmpid) {
			_id = id;
			_name = name;
			*_cmpId = cmpid;
		}
		void showdata() {
			cout << "ID: " << _id << "\t" << "Name: " << _name << "\t" << "cmpId: " << *_cmpId << '\n';
		}

	};

	int main() {

		CopyCtor cp;
		cp.set(101, "raghava", 555);
		CopyCtor cp1(cp);

		cp1.setValues(102, "kanike", 666);
		cp.showdata();
		cp1.showdata();
		return 0;
	}
}
