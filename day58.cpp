#include<iostream>
using namespace std;

class Animal {

protected:
	int animalData;

public:
	Animal() { }

	Animal(int data) {
		animalData = data;
		cout << "Animals's constructor\n";
	}
	~Animal() {
		cout << "Animal's destructor\n";
	}
};


class Lion : public Animal {

protected:
	int lionData;

public:
	Lion(){ }

	Lion(int ld, int ad):lionData(ld), Animal(ad) {
		cout << "Lion's constructor\n";
	}
	void print() {
		cout << "Animal: " << animalData << "  Lion: " << lionData << endl;
	}
	~Lion() {
		cout << "Lion's destructor\n";
	}
};
class Liger : public Lion {
	int ligerData;

public:
	Liger(int ligData, int ld, int ad):ligerData(ligData), Lion(ld, ad) {
		cout << "Liger's constructor\n";
	}
	void print() {
		cout << "Animal: " << animalData << "  Lion: " << lionData << "  Liger: " << ligerData << endl;
	}

	~Liger() {
		cout << "Liger's destructor\n";
	}
};

