#include <bits/stdc++.h>

using namespace std;

std::string test(std::string s) {
	std::stringstream str(s);
	std::string temp, result("");
	while(std::getline(str, temp, ' ')){
		if((temp.length()&1)==1)std::reverse(temp.begin(),temp.end());
		result+=temp+" ";
	}
	result.pop_back();
	return result;
}

int main()
{
	string text = "Exercises Practice Solution";
	cout << "String: " << text;
	cout << "\nReverse the words in the said string that have odd lengths:\n";
	cout << test(text) << endl;	 
	text = "The quick brown fox jumps over the lazy dog.";
	cout << "\nString: " << text;
	cout << "\nReverse the words in the said string that have odd lengths:\n";
	cout << test(text) << endl;	
}
