#include<iostream>
using namespace std;

template <class Type>
Type larger(Type a, Type  b) {
	if (a > b)
		return a;
	return b;
}

int main() {
	cout << larger(4, 7) << endl;
	cout << larger('n', 'h') << endl;
	cout << larger(3.4, 1.67) << endl;

	Fraction f1(1, 2);
	Fraction f2(3, 4);
	cout << larger(f1, f2) << endl << endl;

	return 0;
}
