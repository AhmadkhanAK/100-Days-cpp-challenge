#include <iostream>
#include <string>

using namespace std;
int main() 
{ 
  int arr[5] = {0,9,8,7,6};
  int *ptr1 = &arr[2];
  int *ptr2 = ptr1++;
  cout<<"Output #1: "<<*ptr2<<endl;
  cout<<"Output #2: "<<*ptr1<<endl;
  
  int ptr3 = *ptr1++;
  cout<<"Output #3: "<<ptr1<<endl;
  cout<<"Output #4: "<<ptr3<<endl;
  
  int *ptr4 = arr+*arr;
  cout<<"Output #5: "<<*ptr4<<endl;
  return 0;
} 
