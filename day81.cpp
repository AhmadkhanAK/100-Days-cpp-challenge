#include<iostream>
using namespace std;

int main()
{
  int a[] = {4,8,6,3,2};
  int b[6],i;
  int highest = a[0];
  int second_highest = a[0];
  int j = 0;
  for(i=0;i<5;i++)
  {
    if(a[i]>highest)
    {
      highest = a[i];
      j = i;
    }
  }
  for(i = 0;i<5;i++)
  {
    if(a[i]<highest && a[i]>second_highest)
    {
      second_highest = a[i];
    }
  }

  for(i = 0;i<j;i++)
  {
    b[i] = a[i];
  }
  b[j] = second_highest;
  b[j+1] = highest-second_highest;
  for(i = j+2;i<6;i++)
  {
    b[i] = a[i-1];
  }
  for(i = 0;i<6;i++)
  {
    cout << b[i] << "\n";
  }
  return 0;
}			
