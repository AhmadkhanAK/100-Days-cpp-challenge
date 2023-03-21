#include<iostream>
using namespace std;
template <class Type>
class Set {
	Type* list;
	int capacity;
	int count;

public:
	Set(int cap = 10);

	void insert(Type val);

	void print();

	~Set();
};

template <class Type>
Set<Type>::Set(int cap) {
	capacity = cap;
	list = new Type[capacity];
	count = 0;
}
template <class Type>
void Set<Type>::insert(Type val) {
	list[count++] = val;
}
template <class Type>
void Set<Type>::print() {
	cout << "{";
	for (int i = 0; i < count - 1; ++i)
		cout << list[i] << ", ";

	if (count > 0)
		cout << list[count - 1];
	cout << "}\n";
}
template <class Type>
Set<Type>::~Set() {
	delete[]list;
}
int main()
{
	Set<int> set;
	set.insert(2);
	set.insert(3);
	set.insert(5);
	set.insert(7);
	set.insert(11);

	set.print();

	Set<char> set1;
	set1.insert('e');
	set1.insert('h');
	set1.insert('q');
	set1.insert('c');

	set1.print();

	return 0;
}
