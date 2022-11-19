#pragma once
#include<iostream>
#include<string>
using namespace std;

class Shape {
private:
	int coordinateX = 0;
	int coordinateY = 0;

public:
	Shape(int, int);
	Shape(const Shape&);
	Shape operator=(const Shape&);
	virtual string show();
	virtual void set(int,int);
	virtual double getArea();
};
