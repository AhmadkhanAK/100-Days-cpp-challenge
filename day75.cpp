#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int index, arr[SIZE] = { 2,4,6,8,10 };

	try {
		cout << "Enter index: ";
		cin >> index;

		if (index < 0 || index >= SIZE)
			throw index;

		cout << "Value at index " << index << ": " << arr[index] << endl;
	}
	catch (int index){
		cout << "Index ("<<index<<") is out of bound\n";
	}

	return 0;
}
