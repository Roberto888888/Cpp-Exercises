#include <iostream>
#include <cmath>

using namespace std;


// The use of templates poses an annoying problem...
// Definition and declaration of template functions and classes
// and their methods HAVE TO BE in the same file, the header file
// conventionally.

// Also NOTE that the friend function inside the class declaration
// HAS TO be declared with a different template parameter (U in this
// case).


template <typename T>
class v2d {
private:
	T x;
	T y;
public:
	v2d(T , T);
	v2d(const v2d &);
	~v2d(void);

	v2d<T> & operator=(const v2d<T> &);
	v2d<T> & operator+(const v2d<T> &);
	v2d<T> & operator*(double k); 
	double operator*(const v2d<T> &);
	double length(void);

	// NB template parameter must be different
	template <typename U>
	friend std::ostream& operator<<(std::ostream & os, const v2d<U> & V);
};


//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////
//                       FRIEND FUNCTION                             //
///////////////////////////////////////////////////////////////////////

template <typename U>
std::ostream& operator<<(std::ostream & os, const v2d<U> & V) {
	os << "[" << V.x << " , " << V.y << "]";
	return os;
}









////////////////////////////////////////////////////////////////////////
//                           METHODS                                  //
////////////////////////////////////////////////////////////////////////

template <typename T>
v2d<T>::v2d(T a , T b) {
	x = a;
	y = b;
}

template <typename T>
v2d<T>::v2d(const v2d<T> & v) {
	this->x = v.x;
	this->y = v.y;
}

template <typename T>
v2d<T>::~v2d() { }

template <typename T>
v2d<T>& v2d<T>::operator=(const v2d<T> & v) {
	this->x = v.x;
	this->y = v.y;
	return *this;
}

template <typename T>
v2d<T>& v2d<T>::operator+(const v2d<T> & v) {
	this->x = this->x + v.x;
	this->y = this->y + v.y;
	return *this;
}

template <typename T>
double v2d<T>::operator*(const v2d<T> & v) {
	return (this->x * v.x + this->y * v.y);
}

template <typename T>
v2d<T>& v2d<T>::operator*(double k) {
	x *= k;
	y *= k;
	return *this;
}

template <typename T>
double v2d<T>::length() {
	return (sqrt(pow(x, 2) + pow(y, 2)));
}