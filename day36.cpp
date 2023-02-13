#include <iostream>
using namespace std;

string test(string s1)
          {
            if (s1.length() > 1 && s1.substr(0, 2) == s1.substr(s1.length() - 2))
            {
                return s1.substr(2);
            }
            else
            {
                return s1;
            }
        }
        
int main() 
 {
  cout << test("abcab") << endl;  
  cout << test("Python") << endl; 
  cout << test("abcabab") << endl;  
  return 0;    
}
