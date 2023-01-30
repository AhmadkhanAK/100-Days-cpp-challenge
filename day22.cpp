#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int pid=0,sid=0;
class Person{
    string name;
    int age;
    public:
    Person(){name=" ";
    age=0;
    }
    virtual void getdata(){
        cin>>name;
        cin>>age;
    }
    virtual void putdata(){
        cout<<name<<" "<<age<<" ";
    }
    
};
class Professor : public Person{
    int publications;
    int cur_id;
    public:
    Professor():Person(){
        publications=0,cur_id=++pid;
    }
    virtual void getdata(){
        Person::getdata();
        cin>>publications;
    }
    virtual void putdata(){
        Person::putdata();
        cout<<publications<<" "<<cur_id<<endl;
    }
    
};
class Student : public Person{
    int *marks;
    int cur_id;
    public:
    Student():Person(){
        marks=new int [6]; 
        cur_id=++sid;
   }
   virtual void getdata(){
       Person::getdata();
       for(int i=0;i<6;i++){
           cin>>marks[i];
       }
   }
   virtual void putdata(){
       Person::putdata();
       int sum=0;
       for(int i=0;i<6;i++){
           sum = sum + marks[i];
        }
        cout<<sum<<" "<<cur_id<<endl;
   }
    
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
