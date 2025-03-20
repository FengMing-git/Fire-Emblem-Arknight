#include"GraphManager.h"

GraphManager::GraphManager():
	_w(20),
	_h(20),
	_size(20)
{
	initgraph(_w * _size, _h * _size);
}

// 绘制光标
void GraphManager:: drawCursor(Cursor c)
{
	// 光标的种类
	if (!c.get_station())
	{
		// 确认光标的位置
		int x = c.get_pos().getX() * _size;
		int y = c.get_pos().getY() * _size;

		// 根据闪烁的状态来确定颜色
		if (c.flash())
			setlinecolor(BLACK);
		else
			setlinecolor(0x1E23BD);
		rectangle(x, y, x + _size, y + _size);
	}

}

GraphManager::~GraphManager()
{
	closegraph();
}