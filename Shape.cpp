#include"Shape.h"

Shape::Shape(int x, int y) {
	this->coordinateX = x;
	this->coordinateY = y;
}

Shape::Shape(const Shape& shape) {
	this->coordinateX = shape.coordinateX;
	this->coordinateY = shape.coordinateY;
}

string Shape::show() {
	string str = "(" + to_string(this->coordinateX) + "," 
		+ to_string(this->coordinateY) + ")";
	return str;
}

void Shape::set(int x,int y) {
	this->coordinateX = x;
	this->coordinateY = y;
}

double Shape::getArea() {
	return 0.0;
}

Shape Shape::operator=(const Shape& shape) {
	this->coordinateX = shape.coordinateX;
	this->coordinateY = shape.coordinateY;
	return *this;
}
