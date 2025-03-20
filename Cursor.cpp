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
	// 根据种类的状态值 返回闪烁的状态值
	// 并改变闪烁的状态值
	if (_station)
		return _flash = 0;
	
	return _flash_t = (((clock() - _start) / CLOCKS_PER_SEC) % _flash_t < _flash_t / 2) ? 1 : 0;
}


// 返回光标的位置
Coordinate Cursor::get_pos()
{
	return _position;
}

// 放置光标
void Cursor::moveTo(const Coordinate& destination)
{
	_position = destination;
}
