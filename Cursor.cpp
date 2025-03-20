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
	// 根据种类的状态值 返回闪烁的状态值
	// 并改变闪烁的状态值
	if (_station)
		return _flash = 0;

	_flash = _flash % _flash_t + 1;
	return (_flash <= _flash_t / 2) ? 0 : _flash;
}


// 返回光标的位置
Coordinate Cursor::get_pos()
{
	return _position;
}
