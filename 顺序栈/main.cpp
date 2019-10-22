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
		cout<<"请输入功能编号function:";
		cin>>function;
		switch(function)
		{
		case 1:
			S.initStart();break;
		case 2:
			cout<<"请输入入栈数据e:";
			cin>>e;
			S.pushData(e);break;
		case 3:
			printf("顺序栈单个出栈数据:%d\n",S.popData());break;
		case 4:
			printf("顺序栈取栈顶数据:%d\n",S.getTopdata());break;
		case 5:
			S.functionDisplay();break;
		case 6:
			cout<<"请输入入栈数据总数num:";
			cin>>num;
			S.pushLotsdata(num);break;
		case 7:
			S.popLotsdata();break;
		case 8:
			S.storeDatafile();break;
		case 9:
			S.createSqstackfromfile();break;
		default:
			cout<<"输入的功能编号function不合理"<<endl;
		}
		cout<<"是否继续输入? 1-继续 0-退出 :";
		cin>>key;
		system("cls");
	}
	system("pause");
	return 0;
}
