#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &point);
		Point &operator=(const Point &point);
		~Point();
};

#endif
