#ifndef CURSOR_H
#define CURSOR_H
#include"Coordinate.h"
class Cursor
{
private:
	Coordinate _position;	// ����λ��
	
	int _station;			// ��������״̬
	// 0 - Ĭ�Ϸ���꣬����˸
	// 1 - ͸����꣬��������Ҳ������˸

	int _flash;				// ��˸��״̬
	// 0 - ������
	// 1 - ���ü�
public:
	Cursor();

	~Cursor();

	// ����ƶ�
	void move(char d);

	// ����״̬����������
	int get_station();

	// �����˸��������˸��״ֵ̬
	int flash();
};

#endif