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

	void initStart();//顺序栈的初始化函数

	void pushData(int e);//顺序栈单数据入栈函数

	int popData();//顺序栈单数据出栈函数

	int getTopdata()const;//顺序栈取栈顶函数

	void functionDisplay();//顺序表功能打印输出函数

	void pushLotsdata(int num);//顺序表多数据入栈函数

	void popLotsdata();//顺序表的数据顺序出栈函数

	void storeDatafile()const;//顺序表的数据存储至文本文件函数

	void createSqstackfromfile();//导入文本文件数据创建顺序栈函数
};