#include"Cursor.h"
#include"GraphManager.h"
#include<iostream>

// 光标向下移动10格
int test1()
{
	Cursor c;
	GraphManager gm;

	for (int i = 0; i < 10; i++)
	{
		gm.drawCursor(c);
		std::cout << i << " "
			<< c.get_pos().getX() << " "
			<< c.get_pos().getY() << " "
			<< c.flash() << std::endl;

		c.move('S');
		Sleep(1000);
	}

	system("pause");

	gm.~GraphManager();
	return 0;
}

// 光标不动，在原地闪烁
int main()
{
	//Coordinate arr[] = { {0,0},{1,2},{3,4},{5,5},{0,0},{2,2},{3,3},{4,4} };
	//test1();
	Cursor c;
	c.move('S');
	c.move('S');
	c.move('S');
	GraphManager gm;
	//int i = 0;
	while (true)
	{

		BeginBatchDraw();
		//cleardevice();
		gm.drawCursor(c);
		//c.moveTo(arr[i/100000]);
		//i = (i++) % 800000;
		//std::cout << c.flash() << std::endl;
		EndBatchDraw();
	}
	return 0;
}