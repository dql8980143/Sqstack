#include <iostream>
#include <string>
#include <Windows.h>
#define STACKSIZE 100
using namespace std;

struct sqstack
{
	int* base;
	int * top;
};

class Sqstack
{
private:

	sqstack S;

public:

	void initStart();//˳��ջ�ĳ�ʼ������

	void pushData(int e);//˳��ջ��������ջ����

	int popData();//˳��ջ�����ݳ�ջ����

	int getTopdata()const;//˳��ջȡջ������

	void functionDisplay();//˳����ܴ�ӡ�������

	void pushLotsdata(int num);//˳����������ջ����

	void popLotsdata();//˳��������˳���ջ����

	void storeDatafile()const;//˳�������ݴ洢���ı��ļ�����

	void createSqstackfromfile();//�����ı��ļ����ݴ���˳��ջ����
};