#include "Sqstack.h"

//顺序栈的初始化函数
void Sqstack::initStart()
{
	cout<<"执行顺序栈的初始化功能"<<endl;
	S.base=new int[STACKSIZE];
	S.top=S.base;
}

//顺序栈单个数据入栈函数
void Sqstack::pushData(int e)
{
	cout<<"执行顺序栈单个数据入栈功能"<<endl;
	if(S.top-S.base==STACKSIZE)
	{
		cout<<"顺序栈满"<<endl;
		Sleep(1000);
		exit(1);
	}
	*S.top++=e;
}

//顺序栈单个数据出栈函数
int Sqstack::popData()
{
	cout<<"执行顺序栈单个数据出栈功能"<<endl;
	if(S.top==S.base)
	{
		cout<<"顺序栈空"<<endl;
		Sleep(1000);
		exit(2);
	}
	int e=*--S.top;
	return e;
}

//顺序栈取栈顶函数
int Sqstack::getTopdata()const
{
	cout<<"执行顺序栈取栈顶数据功能"<<endl;
	if(S.top==S.base)
	{
		cout<<"顺序栈空"<<endl;
		Sleep(1000);
		exit(3);
	}
	int* p=S.top;
	return *--p;
}

//顺序表功能打印输出函数
void Sqstack::functionDisplay()
{
	string str(20,'=');
	cout<<str<<endl;
	cout<<"    顺序表的功能菜单    "<<endl;
	char* p[]={"1-顺序表的初始化功能","2-顺序表的数据入栈功能","3-顺序栈的数据出栈功能",
		"4-顺序栈的取栈顶数据功能","5-顺序栈的功能打印输出功能",
	"6-顺序表多数据入栈功能","7-顺序表的数据顺序出栈功能",
	"8-顺序表的数据存储至文本文件功能","9-导入文本文件数据创建顺序栈功能"};
	int i;
	int length=sizeof(p)/sizeof(char*);
	for(i=0;i<length;i++)
	{
		cout<<p[i]<<endl;
	}
	cout<<str<<endl;
}

//顺序表多数据入栈函数
void Sqstack::pushLotsdata(int num)
{
	cout<<"执行多数据入栈功能"<<endl;
	initStart();
	int i;
	for(i=0;i<num;i++)
	{
		printf("请输入第%d个入栈数据:",i+1);
		cin>>*S.top;
		S.top++;
	}
}

//顺序表的数据顺序出栈函数
void Sqstack::popLotsdata()
{
	cout<<"执行多数据出栈功能"<<endl;
	if(S.top==S.base)
	{
		cout<<"栈空"<<endl;
		Sleep(1000);
		exit(4);
	}
	int i=1;
	while(S.top!=S.base)
	{
		printf("第%d个出栈数据:%d\n",i,*--S.top);
		i++;
	}
}

//顺序表的数据存储至文本文件函数
void Sqstack::storeDatafile()const
{
	cout<<"执行顺序表的数据存储至文本文件功能"<<endl;
	FILE* fp=fopen("Sqstack.txt","w");
	if(!fp)
	{
		cout<<"文件打开失败"<<endl;
		Sleep(1000);
		exit(5);
	}
	int i=0;
	int* p=S.base;
	int* q=S.top;
	while(p!=q)
	{
		i++;
		fprintf(fp,"顺序栈第%d个数据:%d\n",i,*p++);
	}
	fclose(fp);
}

//导入文本文件数据创建顺序栈函数
void Sqstack::createSqstackfromfile()
{
	cout<<"执行导入文本文件数据创建顺序栈功能"<<endl;
	initStart();
	FILE* fp=fopen("Sqstack.txt","r");
	if(!fp)
	{
		cout<<"文件打开失败"<<endl;
		Sleep(1000);
		exit(6);
	}
	int i;
	while(!feof(fp))
	{
		fscanf(fp,"顺序栈第%d个数据:%d\n",&i,S.top++);
	}
	fclose(fp);
}



