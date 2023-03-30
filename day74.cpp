#include<iostream>
using namespace std;
int main()
{
	int dividend, divisor, quotient;

	try {
		cout << "Enter the dividend: ";
		cin >> dividend;
		cout << endl;

		cout << "Enter the divisor: ";
		cin >> divisor;
		cout << endl;

		if (divisor == 0)
			throw divisor;

		quotient = dividend / divisor;
		cout << "Quotient: " << quotient << endl;
	}
	catch (int x) {
		cout << "Division by "<<x<<" is not allowed" << endl;
	}
	return 0;
}
