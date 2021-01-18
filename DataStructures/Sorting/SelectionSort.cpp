#include<iostream>
using namespace std;


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
	class SelectionSort :public ISort<T> {
	public:
		void SortArry(T* coll, int size) {
			
			for (size_t i = 0; i < size-1; i++)
			{
				int minIndex = i + 1;
				for (size_t j = i+1; j < size; j++)
				{
					if (coll[minIndex] >  coll[j]) {
						minIndex = j;
					}

				}
				if (coll[i] > coll[minIndex])
					swap(coll[i], coll[minIndex]);
			}
		

		}

	};
	int main() {
		int arr[10] = { 5,10,7,9,2,1,3,8,6,4 };
		ArrayContainer<int, 10> acnt(arr);
		SelectionSort<int> selSrt;
		acnt.setSort(&selSrt);
		acnt.sort();
		acnt.Display();

		return 0;
	}
