#include<iostream>
using namespace std;
int main()
{
	int a1[3][3];
	int a2[3][3];
	int a3[3][3]={0};
	
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		cin>>a1[i][j];
		if(a1[i][j]!=0)
		{
			a3[i][j]=a1[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		cin>>a2[i][j];
		if(a2[i][j]!=0)
		{
			a3[i][j]+=a2[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		cout<<a3[i][j]<<" ";
	}
	cout<<"\n";
	}
return 0;
}
