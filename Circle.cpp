#include"Circle.h"

Circle::Circle() : Shape(0,0){
}

double Circle::getArea() {
	return this->PI * pow(this->radius,2);
}

string Circle::show() {
	string str = "The radius of circle : " + to_string(this->radius);
	str.append("\n");

	string areaStr = to_string(this->getArea());
	int dotPos = areaStr.find('.');
	areaStr = areaStr.substr(0, dotPos+3);

	str += "The area of circle : " + areaStr;
	str.append("\n");
	str += "The center of circle : " + this->Shape::show();
	return str;
}

void Circle::set(int x, int y, int radius) {
	this->Shape::set(x, y);
	this->radius = radius;
}