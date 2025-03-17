#pragma once
#include <iostream>
using namespace std;

class Shape {
public:
	virtual void area() = 0;
};

class Circle : public Shape {
	float radius;
public:
	Circle(float r) :radius(r) {}
	void area() override
	{
		cout << "Circle :: " << 3.14 * radius * radius << endl;
	}
};

class Rectangle: public Shape {
	float length, width;
public:
	Rectangle(float l, float w) :length(l), width(w) {}
	void area() override
	{
		cout << "Rectangle :: " << length * width << endl;
	}
};