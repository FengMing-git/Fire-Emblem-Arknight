#include"Cursor.h"

Cursor::Cursor() :_position(), _station(0), _flash(1),_flash_t(60000) {}

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

	_flash = _flash % _flash_t + 1;
	return (_flash <= _flash_t / 2) ? 0 : _flash;
}


// ���ع���λ��
Coordinate Cursor::get_pos()
{
	return _position;
}
