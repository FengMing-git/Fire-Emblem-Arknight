#ifndef GRAPHMANAGER_H
#define GRAPHMANAGER_H
#include"Cursor.h"
#include<easyx.h>
// ͼ�����
class GraphManager
{
private:
	int _w;		// ��ͼ�Ŀ��
	int _h;		// ��ͼ�ĸ߶�
	int _size;	// ÿ�����ӵĴ�С

public:

	GraphManager();
	
	~GraphManager();

	// ���ƹ��
	void drawCursor(Cursor c);
};

#endif // !GRAPHMANAGER_H
