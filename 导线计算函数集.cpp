#include"Point.h"
#include"Angle.h"


//��д˼·,�����Ƕ���,����ͱ���
//�����������귴�㺯��

/*********************
���귴��,������������ 
����A,B����ƽ������,����AB��λ�Ǧ�ab,��AB֮��ľ���SAB
**********************/

Angle BackCalAngle(const Point a, const Point b)
{
	
	double alfaAB;
	alfaAB = atan((b.y - a.y) / (b.x - a.x));
	Angle AlfaAB(alfaAB,RAD);
	//AlfaAB;//��һ����ĸ�ֵ
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




