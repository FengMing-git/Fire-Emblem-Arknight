#include"Cursor.h"

Cursor::Cursor() :_position(), _station(0), _flash(1),_flash_t(2),_start(clock()) {}

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
	
	return _flash_t = (((clock() - _start) / CLOCKS_PER_SEC) % _flash_t < _flash_t / 2) ? 1 : 0;
}


// ���ع���λ��
Coordinate Cursor::get_pos()
{
	return _position;
}

// ���ù��
void Cursor::moveTo(const Coordinate& destination)
{
	_position = destination;
}
