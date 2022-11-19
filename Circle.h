#pragma once
#include<iostream>
#include<string>
#include"Shape.h"
using namespace std;

class Circle : public Shape{
private:
	const double PI = 3.1415926;
	int radius = 0;

public:
	Circle();
	virtual double getArea();
	virtual string show();
	virtual void set(int, int,int);
};