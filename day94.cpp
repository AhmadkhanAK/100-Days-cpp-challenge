#include <iostream>
using namespace std;

int test(int x, int y)
        {
            if (x > 13 && y > 13) return 0;
            if (x <= 13 && y > 13) return x;
            if (y <= 13 && x > 13) return y;
            return x > y ? x : y;
        }
        
        
int main() 
 {
  cout << test(4, 5) << endl;  
  cout << test(7, 12) << endl;  
  cout << test(10, 13) << endl;  
  cout << test(17, 33) << endl;    
  return 0;    
}
