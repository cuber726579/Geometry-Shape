#include"Rectangle.h"

Rectangle::Rectangle() : Shape(0,0) {
}

double Rectangle::getArea() {
	return width * length;
}

string Rectangle::show() {
	string str = "The width of rectangle : " + to_string(this->width);
	str.append("\n");
	str += "The length of rectangle :" + to_string(this->length);
	str.append("\n");

	string areaStr = to_string(this->getArea());
	int dotPos = areaStr.find('.');
	areaStr = areaStr.substr(0, dotPos + 3);

	str += "The area of rectangle : " + areaStr;
	str.append("\n");
	str += "The left upper vertex of rectangle : " + this->Shape::show();
	return str;
}

void Rectangle::set(int x, int y, int width, int length) {
	this->Shape::set(x, y);
	this->width = width;
	this->length = length;
}
