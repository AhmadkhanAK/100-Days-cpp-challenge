#include <iostream>

#include<algorithm>
#include <stack>

using namespace std;
 
string reverse_vowels(string ostr) {
    vector<int>vec_data;
    string result_str=ostr;
    for(int i=0;i<ostr.length();i++) {
    	if(ostr[i]=='A' or ostr[i]=='E' or ostr[i]=='I' or ostr[i]=='O' or ostr[i]=='U' or ostr[i]=='a' or ostr[i]=='e' or ostr[i]=='i' or ostr[i]=='o' or ostr[i]=='u' ) 
			vec_data.push_back(i);
       }
   for(int i=0;i<vec_data.size()/2;i++) swap(result_str[vec_data[i]],result_str[vec_data[vec_data.size()-1-i]]);
        return result_str;
    }
 

int main()
{
  char str1[] = "w3resource";
  cout << "Original string: " << str1;
  cout << "\nAfter reversing the vowels of the said string: " << reverse_vowels(str1);
  char str2[] = "Python";
  cout << "\n\nOriginal string: " << str2;
  cout << "\nAfter reversing the vowels of the said string: " << reverse_vowels(str2);
  char str3[] = "Hello";
  cout << "\n\nOriginal string: " << str3;
  cout << "\nAfter reversing the vowels of the said string: " << reverse_vowels(str3);
  char str4[] = "USA";
  cout << "\n\nOriginal string: " << str4;
  cout << "\nAfter reversing the vowels of the said string: " << reverse_vowels(str4);
  return 0;    
}
