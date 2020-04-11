#include "Angle.h"
#include<iostream>
using namespace std;

Angle::Angle()
{
	this->astyle = RAD;
	radvalue = 0;
}

Angle::Angle(double value, AngleStyle style = RAD)
{
	//ֻ����һ��ֵ,Ĭ����RAD
	if (style == RAD)
	{
		this->radvalue = value;

	}
	//ָ��AngleStyle��DEG,�ȼ���Ƿ���0-360֮��,���ڵĻ��Զ�ת��
	else if (style == DEG)
	{
		this->degvalue = value;
		this->radvalue = DEG2RAD();
	}
	else if (style == DMS)
	{
		this->dmsvalue = value;
		this->radvalue = DMS2RAD();
	}
	//ָ��
}

//����ת��
//�ȷ���תʮ���ƽǶ�
double Angle::DMS2DEG()
{
	//�ȷ����Ȼ���ʮ���ƽǶ�
	iDegree = int(dmsvalue);
	iMin = int((dmsvalue - iDegree) * 100);
	iSecond = ((dmsvalue - iDegree) * 100 - iMin) * 100;
	//�ѷ�/60+��/3600
	degvalue = iDegree + double(iMin) / 60 + iSecond / 3600;
	return degvalue;
}

//�ȷ���ת����
double Angle::DMS2RAD()
{
	double Angle_tenth = DMS2DEG();
	//�Ƕ���ת���ɻ���
	double Angle_circle = Angle_tenth * PI / 180;
	return Angle_circle;
}

//����ת��ʮ���ƽǶ�
double Angle::RAD2DEG()
{
	return radvalue * 180 / PI;
}
//����ת�ɶȷ���
double Angle::RAD2DMS()
{
	this->degvalue = RAD2DEG();
	iDegree = int(degvalue);
	iMin = int((degvalue - iDegree) * 60);
	iSecond = ((degvalue - iDegree) * 60 - iMin) * 60;
	dmsvalue = iDegree + double(iMin) / 100 + iSecond / 10000;
	return dmsvalue;

}

//�Ƕ�ת�ɻ���
double Angle::DEG2RAD()
{
	return degvalue * PI / 180;
}


//�õ�radֵ
double Angle::getRAD()
{
	return radvalue;
}

//�õ�DEGֵ
double Angle::getDEG()
{
	return degvalue;
}

//�õ�DMS
double Angle::getDMS()
{
	return dmsvalue;
}

//��ӡ�Ƕ�
void Angle::printAngle()
{
	cout << "�Ƕ�ֵ��" << degvalue << endl;
	cout << "����ֵ��" << radvalue << endl;
	cout << "�ȷ�����" << dmsvalue << endl;
	cout << iDegree << "��" << iMin << "\"" << iSecond << "\'" << endl;

}

