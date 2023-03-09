#include<iostream>
using namespace std;
class Rectangle {
	double length;
	double width;
public:
	Rectangle() {
		length = width = 0;
	}
	Rectangle(double l, double w) {
		length = l;
		width = w;
	}
	double getLength() const {
		return length;
	}
	double getWidth() const {
		return width;
	}
	void setDimension(double l, double w) {
		if (l >= 0)
			length = l;
		else
			length = 0;
		if (w >= 0)
			width = w;
		else
			width = 0;
	}
	double area() const {
		return length * width;
	}
	void print() const{
		//std::cout << "RECTANGLE\n";
		std::cout << "Length: " << length << "   Width: " << width;
	}
};
class Box :public Rectangle {
	double height;

public:
	Box() {
		height = 0;
	}
	Box(double l, double w, double h) :Rectangle(l, w) {
		height = h;
	}
	void setDimension(double l, double w, double h) {

		Rectangle::setDimension(l, w);

		if (h >= 0)
			height = h;
		else
			height = 0;
	}
	double area() const {
		return 2 * (getLength() * getWidth() + getWidth() * height + height * getLength());
	}
	double volume() {
		return Rectangle::area() * height;
	}
	void print() const {
		//std::cout << "BOX\n";
		Rectangle::print();
		std::cout << "   Height: " << height;
	}
};
