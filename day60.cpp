#include<iostream>
#include<string.h>

class Pet {
	char name[50];

public:
	Pet(const char n[]) {
		strcpy_s(name, 50, n);
	}
	virtual void print() {
		std::cout << "Name: " << name<<"      (Pet's Print)";
	}
};
class Dog :public Pet {
	char breed[50];

public:
	Dog(const char n[], const char b[]) :Pet(n) {
		strcpy_s(breed, 50, b);
	}

	void print() {
		Pet::print();
		std::cout << "  Breed: " << breed << "      (Dog's Print)" << std::endl;
	}
};
void callPrint(Pet& pet) {
	pet.print();
}

int main()
{
	Pet pet("Captain");
	callPrint(pet);
	cout << endl;

	Dog dog("Patch", "German Shepherd");
	callPrint(dog);
	cout << endl;

	Pet* obj = new Dog("Tommy","Bulldog");
	obj->print();

	return 0;
}
