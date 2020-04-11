#pragma once
static double PI = 3.1415926;
//����һ���Ƕ���,�Ƕ�����������ʽ,Ĭ��ת���ɻ���RAD
//�ṩת������,����+-
enum AngleStyle  //�Ƕ������Ǹ�ö��
{
	DEG,  //�Ƕ���ʮ���ƶȱ�ʾ
	DMS,  //�ȷ���
	RAD   //����
};

class Angle
{
public:
	//���캯��,����
	Angle();                   //ɶ����дĬ����0,
	Angle(double,AngleStyle);  //��д��ʽ,Ĭ�ϽǶȸ�ʽ��RAD
	//��������
	//~Angle();
	//���ؼӼ���,�û������Ӽ�

	//����ת��
	double DEG2RAD();
	double DMS2RAD();
	double RAD2DEG();
	double RAD2DMS();
	double DMS2DEG();


	//�õ�radֵ
	double getRAD();

	//�õ�DEGֵ
	double getDEG();

	//�õ�DMS
	double getDMS();

	//��ӡ�Ƕ�
	void printAngle();


private:
	//�Ƕ�ֵ�û��ȴ洢
	double radvalue;
	double dmsvalue;
	double degvalue;
	//��������Ƕȵ���ʽ
	AngleStyle astyle;
	//����ȷ���
	int iDegree;
	int iMin;
	double iSecond;

};

