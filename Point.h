#pragma once
#include<string>
#include<iostream>
using namespace std;

class Point
{
public:
	Point();
	Point(double, double);

	//打印点
	void PrintPoint();

	//string name;   //点名
	double x;      //x坐标
	double y;      //y坐标
};

