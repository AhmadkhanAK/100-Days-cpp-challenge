#include<iostream>
using namespace std;
template <typename Type>
void bubbleSort(Type* arr, int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

int main() {

	int intArr[5] = {3,7,11,5,2};
	bubbleSort(intArr, 5);

	for (int i = 0; i < 5; ++i)
		cout << intArr[i] << "  ";
	cout << endl << endl;

	char charArr[5] = { 'd', 'u', 'r', 'g', 'n'};
	bubbleSort(charArr, 5);

	for (int i = 0; i < 5; ++i)
		cout << charArr[i] << "  ";
	cout << endl << endl;

	return 0;
}
