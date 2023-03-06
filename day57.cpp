#include <iostream>
using namespace std;

class Fraction {
	int numerator;
	int denominator;

	friend ostream& operator<<(ostream& _cout, const Fraction& obj);
	friend istream& operator>>(istream& _cin, Fraction& obj);

public:
	Fraction() {
		numerator = 0;
		denominator = 1;
	}

	Fraction(int n, int d) {
		numerator = n;
		denominator = d;
	}

	Fraction(const Fraction& obj) {
		numerator = obj.numerator;
		denominator = obj.denominator;
	}

	void print() {
		std::cout << numerator << "/" << denominator << std::endl;
	}

	Fraction operator +(const Fraction& obj) {
		Fraction result;
		result.numerator = (numerator * obj.denominator) + (obj.numerator * denominator);
		result.denominator = denominator * obj.denominator;
		return result;
	}

	Fraction operator +(int num) {
		Fraction result;
		result.numerator = numerator + (num * denominator);
		result.denominator = denominator;
		return result;
	}

	Fraction operator +=(const Fraction& obj) {
		*this = *this + obj;
		return *this;
	}

	Fraction operator -(const Fraction& obj) {
		Fraction result;
		result.numerator = (numerator * obj.denominator) - (obj.numerator * denominator);
		result.denominator = denominator * obj.denominator;
		return result;
	}

	bool operator ==(const Fraction& obj) {
		return (numerator == obj.numerator && denominator == obj.denominator);
	}

	bool operator !=(const Fraction& obj) {
		return (numerator != obj.numerator || denominator != obj.denominator);
	}

	bool operator >(const Fraction& obj) {
		Fraction diff = *this - obj;
		return (diff.numerator > 0);
	}

	bool operator !() {			//Returns true if Fraction is 0
		return (numerator == 0);
	}

	Fraction operator ++() {			//Pre-increment
		//*this = *this + 1;
		numerator = numerator + denominator;
		return *this;
	}

	Fraction operator ++(int d) {		//Post-increment
		Fraction prev = *this;
		numerator = numerator + denominator;
		return prev;
	}

	operator float() {
		return float(numerator) / float(denominator);
	}

};

ostream& operator<<(ostream& _cout, const Fraction& obj) {
	cout << obj.numerator << "/" << obj.denominator << endl;
	return _cout;
}

istream& operator>>(istream& _cin, Fraction& obj) {
	cout << "Enter numerator: ";
	cin >> obj.numerator;
	cout << "Enter denominator: ";
	cin >> obj.denominator;
	return _cin;
}

