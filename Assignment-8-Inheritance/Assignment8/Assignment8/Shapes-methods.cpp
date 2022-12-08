#include "Shapes.h"
#include <cmath>

# define PI 3.1415926



/////////////////////////////////////////////////////////
//                 RECTANGLE                           //
/////////////////////////////////////////////////////////

Rectangle::Rectangle(double x, double y) {
	h = x;
	b = y;
}
double Rectangle::area()      { return (b * h); }
double Rectangle::perimeter() { return (2 * b + 2 * h); }
double Rectangle::height()    { return h; }
double Rectangle::width()     { return b; }
void Rectangle::rotate() {
	double x;
	x = b;
	b = h;
	h = x;
}



/////////////////////////////////////////////////////////
//                    SQUARE                           //
/////////////////////////////////////////////////////////

Square::Square(double x) : Rectangle(x, x) { }



/////////////////////////////////////////////////////////
//                    CIRCLE                           //
/////////////////////////////////////////////////////////

Circle::Circle(double x)   { r = x; }
double Circle::area()      { return (r * r * PI); }
double Circle::perimeter() { return (2 * PI * r); }
double Circle::height()    { return (2 * r); }
double Circle::width()     { return (2 * r); }