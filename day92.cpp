#include <iostream>
 
using namespace std;

bool test(int n)
        {
             return n % 10 <= 2 || n % 10 >= 8;
        }
     
        
int main() 
 {
  cout << test(3) << endl; 
  cout << test(7) << endl; 
  cout << test(8) << endl;
  cout << test(21) << endl;         
  return 0;      
}
