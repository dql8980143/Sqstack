#include "Sqstack.h"

//˳��ջ�ĳ�ʼ������
void Sqstack::initStart()
{
	cout<<"ִ��˳��ջ�ĳ�ʼ������"<<endl;
	S.base=new int[STACKSIZE];
	S.top=S.base;
}

//˳��ջ����������ջ����
void Sqstack::pushData(int e)
{
	cout<<"ִ��˳��ջ����������ջ����"<<endl;
	if(S.top-S.base==STACKSIZE)
	{
		cout<<"˳��ջ��"<<endl;
		Sleep(1000);
		exit(1);
	}
	*S.top++=e;
}

//˳��ջ�������ݳ�ջ����
int Sqstack::popData()
{
	cout<<"ִ��˳��ջ�������ݳ�ջ����"<<endl;
	if(S.top==S.base)
	{
		cout<<"˳��ջ��"<<endl;
		Sleep(1000);
		exit(2);
	}
	int e=*--S.top;
	return e;
}

//˳��ջȡջ������
int Sqstack::getTopdata()const
{
	cout<<"ִ��˳��ջȡջ�����ݹ���"<<endl;
	if(S.top==S.base)
	{
		cout<<"˳��ջ��"<<endl;
		Sleep(1000);
		exit(3);
	}
	int* p=S.top;
	return *--p;
}

//˳����ܴ�ӡ�������
void Sqstack::functionDisplay()
{
	string str(20,'=');
	cout<<str<<endl;
	cout<<"    ˳���Ĺ��ܲ˵�    "<<endl;
	char* p[]={"1-˳���ĳ�ʼ������","2-˳����������ջ����","3-˳��ջ�����ݳ�ջ����",
		"4-˳��ջ��ȡջ�����ݹ���","5-˳��ջ�Ĺ��ܴ�ӡ�������",
	"6-˳����������ջ����","7-˳��������˳���ջ����",
	"8-˳�������ݴ洢���ı��ļ�����","9-�����ı��ļ����ݴ���˳��ջ����"};
	int i;
	int length=sizeof(p)/sizeof(char*);
	for(i=0;i<length;i++)
	{
		cout<<p[i]<<endl;
	}
	cout<<str<<endl;
}

//˳����������ջ����
void Sqstack::pushLotsdata(int num)
{
	cout<<"ִ�ж�������ջ����"<<endl;
	initStart();
	int i;
	for(i=0;i<num;i++)
	{
		printf("�������%d����ջ����:",i+1);
		cin>>*S.top;
		S.top++;
	}
}

//˳��������˳���ջ����
void Sqstack::popLotsdata()
{
	cout<<"ִ�ж����ݳ�ջ����"<<endl;
	if(S.top==S.base)
	{
		cout<<"ջ��"<<endl;
		Sleep(1000);
		exit(4);
	}
	int i=1;
	while(S.top!=S.base)
	{
		printf("��%d����ջ����:%d\n",i,*--S.top);
		i++;
	}
}

//˳�������ݴ洢���ı��ļ�����
void Sqstack::storeDatafile()const
{
	cout<<"ִ��˳�������ݴ洢���ı��ļ�����"<<endl;
	FILE* fp=fopen("Sqstack.txt","w");
	if(!fp)
	{
		cout<<"�ļ���ʧ��"<<endl;
		Sleep(1000);
		exit(5);
	}
	int i=0;
	int* p=S.base;
	int* q=S.top;
	while(p!=q)
	{
		i++;
		fprintf(fp,"˳��ջ��%d������:%d\n",i,*p++);
	}
	fclose(fp);
}

//�����ı��ļ����ݴ���˳��ջ����
void Sqstack::createSqstackfromfile()
{
	cout<<"ִ�е����ı��ļ����ݴ���˳��ջ����"<<endl;
	initStart();
	FILE* fp=fopen("Sqstack.txt","r");
	if(!fp)
	{
		cout<<"�ļ���ʧ��"<<endl;
		Sleep(1000);
		exit(6);
	}
	int i;
	while(!feof(fp))
	{
		fscanf(fp,"˳��ջ��%d������:%d\n",&i,S.top++);
	}
	fclose(fp);
}



