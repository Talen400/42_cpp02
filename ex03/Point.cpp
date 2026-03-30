#include "Point.hpp"

Point::Point(): _x(0), _y(0) {};

Point::Point(float const x, float const y): _x(x), _y(y){};

Point	&Point::operator=(const Point &other) {
	(void ) other;
	return *this;
}

Point::~Point() {};

/*
 * I/O stream
 */

std::ostream &operator<<(std::ostream &os, const Point &point) {
	os << point.
}
