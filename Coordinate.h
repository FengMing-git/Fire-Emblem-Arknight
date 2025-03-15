#ifndef COORDINATE_H
#define COORDINATE_H
#include<cmath>
class Coordinate
{
private:
	int _x;
	int _y;
public:
	Coordinate();

	Coordinate(int x, int y);

	Coordinate(const Coordinate& c);

	~Coordinate();

	int getX() const;

	int getY() const;
	
	void setX(int x);

	void setY(int y);

	int manhattanDistance(const Coordinate& c);

	double euclideanDistance(const Coordinate& c);

	double distance(const Coordinate& c);

	void move(const char d);

};

#endif
