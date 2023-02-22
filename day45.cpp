#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
	int *p = new int[5];	int *q = new int;  
              *q = 2;			*p = *q + 3;
              for (int i = 1; i < 5; ++i)
                     *(p+i) = *(p+i-1) + *q;

              for (int i = 0; i < 5; ++i)
                     cout << q[i] << endl;

	return 0; 
} 


