#include "Point.h"

Point::Point(double x=0 , double y=0)
{
	//this->name = name;
	this->x = x;
	this->y = y;
}
//��ӡ��
void Point::PrintPoint()
{
	cout << "(" << this->x << "," << this->y << ")" << endl;
}
