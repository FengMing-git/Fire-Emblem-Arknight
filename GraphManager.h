#ifndef GRAPHMANAGER_H
#define GRAPHMANAGER_H
#include"Cursor.h"
#include<easyx.h>
// 图像管理
class GraphManager
{
private:
	int _w;		// 地图的宽度
	int _h;		// 地图的高度
	int _size;	// 每个格子的大小

public:

	GraphManager();
	
	~GraphManager();

	// 绘制光标
	void drawCursor(Cursor c);
};

#endif // !GRAPHMANAGER_H
