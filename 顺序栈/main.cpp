#include "Sqstack.h"

int main()
{
	Sqstack S;
	bool key=true;
	int function;
	int e;
	int num;
	while(key)
	{
		S.functionDisplay();
		cout<<"�����빦�ܱ��function:";
		cin>>function;
		switch(function)
		{
		case 1:
			S.initStart();break;
		case 2:
			cout<<"��������ջ����e:";
			cin>>e;
			S.pushData(e);break;
		case 3:
			printf("˳��ջ������ջ����:%d\n",S.popData());break;
		case 4:
			printf("˳��ջȡջ������:%d\n",S.getTopdata());break;
		case 5:
			S.functionDisplay();break;
		case 6:
			cout<<"��������ջ��������num:";
			cin>>num;
			S.pushLotsdata(num);break;
		case 7:
			S.popLotsdata();break;
		case 8:
			S.storeDatafile();break;
		case 9:
			S.createSqstackfromfile();break;
		default:
			cout<<"����Ĺ��ܱ��function������"<<endl;
		}
		cout<<"�Ƿ��������? 1-���� 0-�˳� :";
		cin>>key;
		system("cls");
	}
	system("pause");
	return 0;
}
