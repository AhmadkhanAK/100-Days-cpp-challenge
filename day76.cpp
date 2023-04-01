#include<iostream>
using namespace std;

int main()
{
	string sentence;
	string str1, str2, str3;
	try
	{
		sentence = "Testing string exceptions!";
		cout << "sentence = " << sentence << endl;
		cout << "sentence.length() = " << sentence.length() << endl;

		str1 = sentence.substr(8, 20);
		cout << "str1 = " << str1 << endl;

		str2 = sentence.substr(28, 10);
		cout << "str2 = " << str2 << endl;
	}
	catch (out_of_range re)
	{
		cout << "In the out_of_range "<< "catch block: " << re.what()<< endl;
	}
	return 0;
}
