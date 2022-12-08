# ifndef __shapes__
# define __shapes__

// Abstract class Shape.
// Methods are purely virtual because a generic shape is an
// abstract concept and its method cannot have an 
// implementation.



/////////////////////////////////////////////////////////////
//                    BASE CLASS                           //
/////////////////////////////////////////////////////////////

// This base class that has no specification at all but provides
// with an idea to build on to derive specific shapes.

class Shape {
public:
	// = 0 makes the methods pure virtual
	// They are necessary to exploit polymorphism
	virtual double area()      = 0;
	virtual double perimeter() = 0;
	virtual double height()    = 0;
	virtual double width()     = 0;
	virtual void   rotate()    = 0;

};



/////////////////////////////////////////////////////////////////
//                        RECTANGLE                            //
/////////////////////////////////////////////////////////////////

class Rectangle : public Shape {
private:
	double b;
	double h;
public:
	// Constructor
	Rectangle(double x, double y);

	// These methods are customised for this derived class
	double area();
	double perimeter();
	double height();
	double width();
	void   rotate();
};








////////////////////////////////////////////////////////////////////
//                         SQUARE                                 //
////////////////////////////////////////////////////////////////////

// Square is basically a specific rectangle so it inherits from
// Rectangle but it doesn't need to customize Rectangle's methods

// The only new thing is the constructor. It operates through that of
// 'Rectangle' for the special case (height = width).

// An exception is the method 'rotates', because in this case it 
// doesn't have any effect.

class Square : public Rectangle {
public:
	Square(double s);
	void rotate() {}
};



/////////////////////////////////////////////////////////////////////
//                            CIRCLE                               //
/////////////////////////////////////////////////////////////////////

// Also in this case rotation has no effect.

class Circle : public Shape {
private:
	double r;
public:
	Circle(double r);

	double area();
	double perimeter();
	double height();
	double width();
	void rotate() {}
};

#endif