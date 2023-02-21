#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
int array_size=10;
	int *a;
	a=new int[array_size];
	int *p=a;
	int i=0;

	for(i=0;i<array_size;i++)
		a[i]=i;
	p[0]=10;

	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0; 
} 

