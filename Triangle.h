#pragma once
#include<iostream>
#include<string>
#include"Shape.h"
using namespace std;

class Triangle : public Shape {
private:
	int baseLineLength = 0;
	int height = 0;

public:
	Triangle();
	virtual double getArea();
	virtual string show();
	virtual void set(int, int, int, int);
};