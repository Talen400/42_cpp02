#include "Point.hpp"

Point::Point(): _x(0), _y(0) {};

Point::Point(float const x, float const y): _x(x), _y(y){};

Point	&Point::operator=(const Point &other) {
	(void ) other;
	return *this;
}

Point::~Point() {};

Fixed	Point::getX(void) const {
	return _x;
}

Fixed	Point::getY(void) const { 
	return _y;
}

std::ostream	&operator<<(std::ostream &os, const Point &point){
	os << "(" << point.getX() << ", " << point.getY() << ")";
	return os;
}
