#include<iostream>
#include<conio.h>
using namespace std;
class shape {            
     protected:
          long ar, prmtr;
     public:
          virtual void area()=0;
          virtual void parimeter()=0;
};
class square : public shape {
     private:
          long side;          
     public:
          square(){      
              ar=prmtr=side=0;
          }
          void get(){         
              cout<<"Enter a side of square:";
              cin>>side;
          }
          void area(){
              ar=side*side;       
              cout<<"Area of the square is:"<<ar;
          }
          void parimeter(){
              prmtr=4*side;       
              cout<<endl<<"The perimeter of the square is:"<<prmtr;
          }
};
class triangle : public shape {
     private:
          long base, height, hyp;  
     public:
          triangle(){             
              ar=prmtr=base=height=hyp=0;
          }
          void input(){            
              cout<<endl<<"Enter three sides of Right triangle:";
              cin>>base>>height>>hyp;
          }
          void area(){
              ar=0.5*base*height; 
              cout<<endl<<"The area of Right Triangle is:"<<ar;
          }
          void parimeter(){
              prmtr=base+height+hyp;   
              cout<<endl<<"The parimeter of Right Triangle id:"<<prmtr;
          }
};
int main(){
     square s1;
     triangle t1;
     s1.get();
     s1.area();
     s1.parimeter();
     t1.input();
     t1.area();
     t1.parimeter();
     getch();
     return 0;
    
}