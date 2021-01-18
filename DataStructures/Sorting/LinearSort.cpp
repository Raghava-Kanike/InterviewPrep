#include<iostream>
using namespace std;

namespace LinearSort {
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
	class LinearSort :public ISort<T> {

	public:
		void SortArry(T* coll, int size) {


			for (size_t i = 0; i < size - 1; i++)
			{
				for (size_t j = i + 1; j < size; j++)
				{
					if (coll[i] > coll[j])
						swap(coll[i], coll[j]);
				}

			}
		}

	};
	int main() {
		int arr[10] = { 5,10,7,9,2,1,3,8,6,4 };
		ArrayContainer<int, 10> ac(arr);
		LinearSort<int> linsrt;
		ac.setSort(&linsrt);
		ac.sort();
		ac.Display();


		return 0;
	}
}