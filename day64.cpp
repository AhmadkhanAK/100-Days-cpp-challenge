#include<iostream>
using namespace std;

class Person {
	int phoneNumber;

public:
	Person() {
		phoneNumber = 0;
		cout << "Person's default constructor\n";
	}
	Person(int phoneNumber) {
		this->phoneNumber = phoneNumber;
		cout << "Person's parametrized constructor\n";
	}
int getPhoneNumber() {
		return phoneNumber;
	}
};

class Teacher :virtual public Person {
public:
	Teacher(int phoneNumber) :Person(phoneNumber) { }
};

class Student :virtual public Person {
public:
	Student(int phoneNumber) :Person(phoneNumber) { }
};

class TA :public Teacher, public Student {
public:
	TA(int phoneNumber) :Teacher (phoneNumber), Student (phoneNumber),
	Person (phoneNumber) { }
};
