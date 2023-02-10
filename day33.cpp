#include <iostream>
 
using namespace std;

string test(string str1)
          {
           string result = "";
            for (int i = 0; i < str1.length(); i += 4)
            {
                int c = i + 2;
                int n = 0;
                n += c > str1.length() ? 1 : 2;
                result += str1.substr(i, n);
            }
            return result;
        }
        
int main() 
 {
  cout << test("Python") << endl; 
  cout << test("JavaScript") << endl; 
  cout << test("HTML") << endl;     
  return 0;    
}
