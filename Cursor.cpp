#include"Cursor.h"

Cursor::Cursor() :_position(), _station(0), _flash(1) {}

Cursor::~Cursor() {}

void Cursor::move(char d)
{
	_position.move(d);
}

int Cursor::get_station()
{
	return _station;
}

int Cursor::flash()
{
	// ���������״ֵ̬ ������˸��״ֵ̬
	// ���ı���˸��״ֵ̬
	if (_station)
		return _flash = 0;
	else
		return _flash++;
}
