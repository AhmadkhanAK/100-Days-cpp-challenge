#include<iostream>
using namespace std;
template <class Type>
void mySwap(Type& a, Type& b) {
	cout << "Template function\n";
	Type temp;
	temp = a;
	a = b;
	b = temp;
}

template <>
void mySwap<int>(int& a, int& b) {
	cout << "Specialized Template function\n";
	a = a + b;
	b = a - b;
	a = a - b;
}

int main()
{
	float a = 3.5, b = 6.8;
	mySwap(a, b);
	cout << a << "  " << b << endl << endl;
	int c = 2, d = 7;
	mySwap(c, d);
	cout << c << "  " << d << endl;

	return 0;
}
