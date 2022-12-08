#include <iostream>

using namespace std;


class v2d {
private:
	// internal representation of a vector
	double x;
	double y;
public:
	// Standard constructor
	v2d(double, double);

	// Copy constructor
	v2d(const v2d &);

	// Destructor
	~v2d(void);

	// Assignment - Updates the vector to make it as v
	v2d & operator=(const v2d &);

	// Vector addition - Updates the vector by adding v
	v2d & operator+(const v2d &);

	// Scalar multiplication - Updates the vector by scaling by k
	v2d & operator*(double k);

	// Scalar product of the current vector by another vector 
	double operator*(const v2d &);

	// computes the length of a vector
	double length(void);

	friend std::ostream& operator<<(std::ostream &, const v2d &);
};