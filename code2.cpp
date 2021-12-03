#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
	char k[10005];
	char tmp='$';
	int r=0,p=0;
	int times=0;
void edit()
{
	r=0; 
	//freopen("data.in","r",stdin);
	//freopen("data.in","w",stdout);
/*	cin>>times;
	if(times==0)
	{
		cout<<"这是你第一次打开33IQ题目格式编辑器，我有话要告诉你"<<endl;
		cout<<"本编辑器适用于在33IQ上编辑发布数学题目，大家复制题目时，排版可能不适合33IQ审核标准，特此推出33IQ数学题目格式优化器"<<endl; 
	}
	else
	{
		cout<<"这是你第"<<times<<"打开优化器，欢迎使用"; 
	}
	times++;
	fclose(stdout);
	fclose(stdin);*/
	cout<<"这里是33IQ智能题目格式转换器,输入@终止转换"<<endl; 
	cout<<"当前功能："<<endl;
	cout<<"1.全半角字符转换"<<endl;
	cout<<"2.上标自动处理"<<endl;
	cout<<"3.等号自动换行"<<endl;
	while(cin>>k[r])
	{
		if(k[r]=='@')
		{
			break;
		}
		r++;
	}
	/*freopen("优化输入.in","w",stdout);
	for(int i=0;i<r;i++)
	{
		cout<<k[r]<<endl;
	}
	fclose(stdout);
	freopen("优化输出.out","w",stdout);*/
	cout<<"已输出优化结果" <<endl; 
	for(int j=0;j<r;j++)
	{
		
			if(k[j]>='0'&&k[j]<='9')
			{
				if(tmp=='+'||tmp=='-'||(tmp>='0'&&tmp<='9')||j==0||tmp=='='||(k[j-1]=='g'&&k[j-2]=='l')||(k[j-1]=='g'&&k[j-2]=='o'&&k[j-3]=='l'))
				{
					cout<<k[j]; 
				}
				else if(tmp=='f')
				{
					cout<<k[j];
				}
				else if(tmp>='a'&&tmp<='z'||tmp==')'||tmp==']'||tmp=='］'||tmp=='）') 
				{
					cout<<"^"<<k[j]; 
				}
				else
				{
					cout<<k[j]; 
				}
			}
			else if(k[j]>='a'&&k[j]<='z')
			{
				if(tmp=='e')
				{
					cout<<"^"<<k[j];
				}
				else
				{
					cout<<k[j];
				}
			}
			else if(k[j]=='=')
			{
				cout<<endl<<"=";
			}
			else if(k[j]==',')
			{
				cout<<"，"; 
			}
			else if(k[j]=='.'||k[j]=='．')
			{
				cout<<"。";
			}
			else
			{
				cout<<k[j];
			}
			tmp=k[j];
		
	}
	/*fclose(stdout);
	freopen("优化输出.out","r",stdin);
	char b;
	while(cin>>b)
	{
		cout<<b;
	}*/	
	cout<<endl<<endl<<"已发起新的编辑会话："<<endl<<endl; 
	edit();
}
int main()
{
	edit();
	return 0;
}
