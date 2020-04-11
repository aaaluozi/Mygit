#include"Point.h"
#include"Angle.h"


//编写思路,创建角度类,点类和边类
//用类来做坐标反算函数

/*********************
坐标反算,包含两个函数 
输入A,B两点平面坐标,计算AB方位角αab,和AB之间的距离SAB
**********************/

Angle BackCalAngle(const Point a, const Point b)
{
	
	double alfaAB;
	alfaAB = atan((b.y - a.y) / (b.x - a.x));
	Angle AlfaAB(alfaAB,RAD);
	//AlfaAB;//查一下类的赋值
	AlfaAB.printAngle();
	return AlfaAB;
}

int test01()
{
	Point a(0, 0);
	Point b(1, 1);
	BackCalAngle(a, b);
	return 0;
}


int main()
{
	test01();
	return 0;
}




