#ifndef CURSOR_H
#define CURSOR_H
#include"Coordinate.h"
#include<ctime>

class Cursor
{
private:
	Coordinate _position;	// ����λ��
	
	int _station;			// ��������״̬
	// 0 - Ĭ�Ϸ���꣬����˸
	// 1 - ͸����꣬��������Ҳ������˸

	int _flash;				// ��˸��״̬
	// ������ - ������
	// ����   - ���ü�

	int _flash_t;			// ��˸������

	clock_t _start;			// ��ʼ��˸�ļ�¼1
public:
	Cursor();

	~Cursor();

	// ���ع���λ��
	Coordinate get_pos();

	// ����ƶ�
	void move(char d);

	// ���ù��
	void moveTo(const Coordinate& destination);

	// ����״̬����������
	int get_station();

	// �����˸��������˸��״ֵ̬
	int flash();
};

#endif