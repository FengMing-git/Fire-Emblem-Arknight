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
	//test1();
	Cursor c;
	c.move('S');
	c.move('S');
	c.move('S');
	GraphManager gm;
	while (true)
	{
		gm.drawCursor(c);
		//std::cout << c.flash() << std::endl;
	}
	return 0;
}