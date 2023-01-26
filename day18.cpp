#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
    int l,b,h;
    public:
    friend ostream& operator<<(ostream& out, Box& B);
    Box(){l=b=h=0;}
    Box(int l,int b, int h){
        this->l=l;this->b=b;this->h=h;
        }
    Box(Box &obj){
        l=obj.l;
        b=obj.b;
        h=obj.h;
    }
    int getLength(){return l;} 
    int getBreadth (){return b;} 
    int getHeight (){return h;} 
    long long CalculateVolume(){return l*b*h;}
   bool operator<(const Box &b)const{
    return (this->l < b.l)? true:((this->b<b.b && this->l == b.l)?true:
    ((this->h < b.h && this->b == b.b && this->l == b.l)?true:false)
    );     
}
};
ostream& operator<<(ostream& out, Box& B){
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
}
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

