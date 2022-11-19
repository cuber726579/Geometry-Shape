#pragma once
#include<iostream>
#include<string>
#include"Shape.h"
using namespace std;

class Rectangle : public Shape {
private:
	int width = 0;
	int length = 0;

public:
	Rectangle();
	virtual double getArea();
	virtual string show();
	virtual void set(int, int, int,int);
};