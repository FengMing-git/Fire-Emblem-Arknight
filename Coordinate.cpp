#include "Coordinate.h"

Coordinate::Coordinate() :_x(0), _y(0) {}

Coordinate::Coordinate(int x, int y) :_x(x), _y(y) {}

Coordinate::Coordinate(const Coordinate& c) :_x(c.getX()), _y(c.getY()) {}

Coordinate::~Coordinate() {}

int Coordinate::getX() const
{
	return _x;
}

int Coordinate::getY() const
{
	return _y;
}

void Coordinate::setX(int x)
{
	_x = x;
}

void Coordinate::setY(int y)
{
	_y = y;
}

int Coordinate::manhattanDistance(const Coordinate& c)
{
	return std::abs(_x - c.getX()) + std::abs(_y - c.getY());
}

double Coordinate::euclideanDistance(const Coordinate& c)
{
	return std::sqrt(
		(_x - c.getX()) * (_x - c.getX()) +
		(_y - c.getY()) * (_y - c.getY()));
}

double Coordinate::distance(const Coordinate& c)
{
	return this->manhattanDistance(c);
}

void Coordinate::move(const char d)
{
	switch (d)
	{
	case 'N':
		_y--;
		break;
	case 'S':
		_y++;
		break;
	case 'E':
		_x++;
		break;
	case 'W':
		_x--;
		break;
	default:
		break;
	}
}
