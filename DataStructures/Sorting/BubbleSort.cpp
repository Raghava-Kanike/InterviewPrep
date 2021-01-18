#include<iostream>
using namespace std;
namespace BubbleSort{

template<typename T>
class ISort {
public:
	virtual void SortArry(T* coll, int size) = 0;
};
template<typename T, int size>
class ArrayContainer {
	T* arr;
	ISort<T>* srt;
public:
	ArrayContainer(T* arr) :arr(arr), srt(NULL)
	{

	}
	void setSort(ISort<T>* srt) {
		this->srt = srt;
	}
	void sort() {
		if (!srt == NULL) {
			this->srt->SortArry(arr, size);
		}
	}
	void Display() {
		cout << "\n--------------------------------\n";
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";

		}
		cout << "\n--------------------------------\n";

	}
};
template<typename T>
class BubbleSort :public ISort<T> {
public:
	void SortArry(T* coll, int size) {
		for (size_t i = 0; i < size -1; i++)
		{
			for (size_t j = size - 1; j >=i+1; j--)
			{
				if (coll[j] <= coll[j - 1]) {
					swap(coll[j], coll[j - 1]);
				}

			}

		}

	}

};
int main() {
	int arr[10] = { 5,10,7,9,2,1,3,8,6,4 };
	ArrayContainer<int,10> acnt(arr);
	BubbleSort<int> bsrt;
	acnt.setSort(&bsrt);
	acnt.sort();
	acnt.Display();

	return 0;
}
}