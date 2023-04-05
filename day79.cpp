// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){ int a[] = { 1,2,3,4,5 };
  int t = a[4],i;
  for(i = 4; i>=1; i--)
  {
      a[i]=a[i-1];
  }
  a[0]=t;
  for(i = 0; i<=4; i++)
  {
    cout << a[i] << "\n";
  }
  return 0;
}
