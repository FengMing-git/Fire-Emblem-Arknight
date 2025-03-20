#include"GraphManager.h"

GraphManager::GraphManager():
	_w(20),
	_h(20),
	_size(20)
{
	initgraph(_w * _size, _h * _size);
}

// ���ƹ��
void GraphManager:: drawCursor(Cursor c)
{
	// ��������
	if (!c.get_station())
	{
		// ȷ�Ϲ���λ��
		int x = c.get_pos().getX() * _size;
		int y = c.get_pos().getY() * _size;

		// ������˸��״̬��ȷ����ɫ
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