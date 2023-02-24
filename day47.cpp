#include <iostream>
#include <string>

using namespace std;

double* GetSalary1()
{
    double salary = 26.48;
    double *HourlySalary = new double;
    *HourlySalary =salary;
	
     return HourlySalary;
}

double* GetSalary2()
{
    double salary = 27.48;
    double *HourlySalary = new double;
    *HourlySalary =salary;
	
     return HourlySalary;
}

int main()
{
    double *salary;
    salary=GetSalary1();
    GetSalary2();
	
    cout<<*salary<<endl;
    return 0;
}


