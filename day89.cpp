#include <bits/stdc++.h>

using namespace std;
std::string test(std::string text) {
  int ctr = 0;
  int result = 0;  
  for (int i = 0; i < text.size(); i++) 
  { 
   
    if (text[i] == '0') 
      ctr = 0; 
 
    else
    { 
      ctr++;
      result = std::max(result, ctr); 
    } 
  } 
  std::string result1(result, '1');
  return result1; 
}

int main() {
   string text = "1100110001";
   //string text = "00100111011";
   //string text = "00000";

   cout << "Original Binary String:\n";
   cout << text;
   cout << "\n\nLongest sequence of consecutive ones of the said binary string:\n";
   cout << test(text) << endl;
}
