#include<iostream>
using namespace std;

#include <math.h>

class Shape {
protected:
	double costPerMeter;
public:
	Shape() :costPerMeter(0) {}

	Shape(double c) :costPerMeter(c) {}

	virtual double area() = 0;
	
	double calculateCost() {
		return area()* costPerMeter;
}
};

class Rectangle : private Shape {

	float length;
	float width;

public:
	Rectangle(float l, float w, double c) :length(l), width(w), Shape(c) {}

	double area() {
		return length * width;
	}
};

class Circle : public Shape {

	float radius;

public:
	Circle(float r, double c) :radius(r), Shape(c) {}

	double area() {
		return M_PI * (radius * radius);
	}
};
