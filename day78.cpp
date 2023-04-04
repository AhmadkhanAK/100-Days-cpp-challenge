#include<string>
using namespace std;

class DivisionByZero {
	string message;
public:
	DivisionByZero() {
		message = "Division by zero!";
	}

	DivisionByZero(string msg) {
		message = msg;
	}

	string what() {
		return message;
	}
};
void doDivision() {
	int dividend, divisor, quotient;
	try
	{
		cout << "Enter the dividend: ";
		cin >> dividend;
		cout << endl;

		cout << "Enter the divisor: ";
		cin >> divisor;
		cout << endl;

		if (divisor == 0)
			throw DivisionByZero("Hey Yo! Exception");

		quotient = dividend / divisor;
		cout << "Quotient: " << quotient << endl;
	}
	catch (DivisionByZero exc)
	{
		cout << "In Catch block: " << exc.what() << endl;
	}
}
int main()
{
	doDivision();
	return 0;
}