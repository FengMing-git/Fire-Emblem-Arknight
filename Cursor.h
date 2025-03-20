#ifndef CURSOR_H
#define CURSOR_H
#include"Coordinate.h"
#include<ctime>

class Cursor
{
private:
	Coordinate _position;	// 光标的位置
	
	int _station;			// 光标种类的状态
	// 0 - 默认方光标，会闪烁
	// 1 - 透明光标，看不到，也不会闪烁

	int _flash;				// 闪烁的状态
	// 非正数 - 看不见
	// 正数   - 看得见

	int _flash_t;			// 闪烁的周期

	clock_t _start;			// 开始闪烁的记录1
public:
	Cursor();

	~Cursor();

	// 返回光标的位置
	Coordinate get_pos();

	// 光标移动
	void move(char d);

	// 放置光标
	void moveTo(const Coordinate& destination);

	// 返回状态，光标的类型
	int get_station();

	// 光标闪烁，返回闪烁的状态值
	int flash();
};

#endif