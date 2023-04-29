#include <iostream>

using namespace std;

string test(string s1, string word)
         {
            return s1.substr(0, 2) + word + s1.substr(2);
         }         
       
int main() 
 {
  cout << test("[[]]","Hello") << endl;  
  cout << test("(())", "Hi") << endl;  
  return 0;    
}
