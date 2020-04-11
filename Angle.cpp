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
	//只输入一个值,默认是RAD
	if (style == RAD)
	{
		this->radvalue = value;

	}
	//指定AngleStyle是DEG,先检查是否在0-360之间,不在的话自动转换
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
	//指定
}

//互相转换
//度分秒转十进制角度
double Angle::DMS2DEG()
{
	//度分秒先化成十进制角度
	iDegree = int(dmsvalue);
	iMin = int((dmsvalue - iDegree) * 100);
	iSecond = ((dmsvalue - iDegree) * 100 - iMin) * 100;
	//把分/60+秒/3600
	degvalue = iDegree + double(iMin) / 60 + iSecond / 3600;
	return degvalue;
}

//度分秒转弧度
double Angle::DMS2RAD()
{
	double Angle_tenth = DMS2DEG();
	//角度再转换成弧度
	double Angle_circle = Angle_tenth * PI / 180;
	return Angle_circle;
}

//弧度转成十进制角度
double Angle::RAD2DEG()
{
	return radvalue * 180 / PI;
}
//弧度转成度分秒
double Angle::RAD2DMS()
{
	this->degvalue = RAD2DEG();
	iDegree = int(degvalue);
	iMin = int((degvalue - iDegree) * 60);
	iSecond = ((degvalue - iDegree) * 60 - iMin) * 60;
	dmsvalue = iDegree + double(iMin) / 100 + iSecond / 10000;
	return dmsvalue;

}

//角度转成弧度
double Angle::DEG2RAD()
{
	return degvalue * PI / 180;
}


//得到rad值
double Angle::getRAD()
{
	return radvalue;
}

//得到DEG值
double Angle::getDEG()
{
	return degvalue;
}

//得到DMS
double Angle::getDMS()
{
	return dmsvalue;
}

//打印角度
void Angle::printAngle()
{
	cout << "角度值是" << degvalue << endl;
	cout << "弧度值是" << radvalue << endl;
	cout << "度分秒是" << dmsvalue << endl;
	cout << iDegree << "°" << iMin << "\"" << iSecond << "\'" << endl;

}

