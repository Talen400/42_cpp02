#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &point);
		Point	&operator=(const Point &other);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Point	&operator+(const Fixed &other) const;
		Point	&operator-(const Fixed &other) const;
};

std::ostream	&operator<<(std::ostream &os, const Point &point);

#endif
