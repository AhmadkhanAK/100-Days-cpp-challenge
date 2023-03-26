#include<iostream>
using namespace std;
template <class Type>
class Set {
	Type* list;
	int capacity;
	int count;

public:
	Set(int cap = 10) {
		cout << "Template Object\n";
		capacity = cap;
		list = new Type[capacity];
		count = 0;
	}

	void insert(Type val) {
		list[count++] = val;
	}

	void print() {
		cout << "{";
		for (int i = 0; i < count - 1; ++i)
			cout << list[i] << ", ";

		if (count > 0)
			cout << list[count - 1];
		cout << "}\n";
	}

	~Set() {
		delete[]list;
	}
};
template <>
class Set<char> {
	bool list[256];
	int count;

public:
	Set() {
		cout << "Specialized Template Object\n";

		for (int i = 0; i < 256; ++i) {
			list[i] = false;
		}
		count = 0;
	}
	void insert(char val) {
		list[val] = true;
		count++;
	}
	void print() {
		if (count > 0) {
			int printCount = count;
			cout << "{";
			for (int i = 0; i < 256; ++i) {
				if (list[i]) {
					cout << (char)i;
					--printCount;

					if (printCount > 0)
						cout << ", ";
					else
						break;
				}
			}
			cout << "}\n";
		}
	}
};

int main()
{
	Set<int> intSet;
	intSet.insert(2);
	intSet.insert(3);
	intSet.insert(5);
	intSet.insert(7);
	intSet.insert(11);

	intSet.print();
	cout << endl;

	Set<char> charSet;
	charSet.insert('e');
	charSet.insert('h');
	charSet.insert('q');
	charSet.insert('c');

	charSet.print();

	return 0;
}
