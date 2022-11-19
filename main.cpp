#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;

int main(void) {
	Circle c;
	c.set(1, 1, 2);
	
	Rectangle r;
	r.set(2, 2, 5, 4);

	Triangle t;
	t.set(2, 2, 5, 4);


	Shape *s1 = &c;
	cout << s1->show() << endl << endl;

	Shape* s2 = &r;
	cout << s2->show() << endl << endl;

	Shape* s3 = &t;
	cout << s3->show() << endl << endl;

	return 0;
}