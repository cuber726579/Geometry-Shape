#include"Triangle.h"

Triangle::Triangle() : Shape(0,0){
}

double Triangle::getArea() {
	return 0.5 * baseLineLength * height;
}

string Triangle::show() {
	string str = "The length of base line : " + to_string(this->baseLineLength);
	str.append("\n");
	str += "The height of triangle :" + to_string(this->height);
	str.append("\n");

	string areaStr = to_string(this->getArea());
	int dotPos = areaStr.find('.');
	areaStr = areaStr.substr(0, dotPos + 3);

	str += "The area of triangle : " + areaStr;
	str.append("\n");
	str += "The vertex of triangle : " + this->Shape::show();
	return str;
}

void Triangle::set(int x, int y, int length, int height) {
	this->Shape::set(x, y);
	this->baseLineLength = length;
	this->height = height;
}
