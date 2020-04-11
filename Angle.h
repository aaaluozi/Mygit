#pragma once
static double PI = 3.1415926;
//创建一个角度类,角度类有三种形式,默认转换成弧度RAD
//提供转换函数,重载+-
enum AngleStyle  //角度类型是个枚举
{
	DEG,  //角度用十进制度表示
	DMS,  //度分秒
	RAD   //弧度
};

class Angle
{
public:
	//构造函数,重载
	Angle();                   //啥都不写默认是0,
	Angle(double,AngleStyle);  //不写格式,默认角度格式是RAD
	//析构函数
	//~Angle();
	//重载加减号,用弧度来加减

	//互相转换
	double DEG2RAD();
	double DMS2RAD();
	double RAD2DEG();
	double RAD2DMS();
	double DMS2DEG();


	//得到rad值
	double getRAD();

	//得到DEG值
	double getDEG();

	//得到DMS
	double getDMS();

	//打印角度
	void printAngle();


private:
	//角度值用弧度存储
	double radvalue;
	double dmsvalue;
	double degvalue;
	//储存输入角度的形式
	AngleStyle astyle;
	//储存度分秒
	int iDegree;
	int iMin;
	double iSecond;

};

