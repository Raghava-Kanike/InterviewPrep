# include<iostream>
using namespace std;
namespace ns1{


namespace myNameSpace {
	int data;
}

namespace myNameSpace2 {
	int data;
}




int main() {

	myNameSpace::data = 100;
	myNameSpace2::data = 200;
	cout << "myNameSpace::data : "<<myNameSpace::data << '\n';
	cout << "myNameSpace2::data :"<<myNameSpace2::data << '\n';



	return 0;
}
}