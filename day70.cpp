#include<iostream>
using namespace std;
template <class Type>
bool isLarger(Type a, Type b) {
	cout << "Template function\n";

	if (a > b)
		return true;
	return false;
}

template <>
bool isLarger<int>(int a, int b) {
	cout << "Specialized Template function\n";

	return (a - b > 0);
}
	
int main()
{
	float a = 6.8, b = 3.5;
	cout << isLarger(a, b) << endl << endl;

	int c = 2, d = 7;
	cout << isLarger<int>(c, d) << endl << endl;

	
	return 0;
}
