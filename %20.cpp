#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str,100);
	int length=strlen(str);
	int space_count=0;
	for(int i=0;i<length;i++)
	{
		if(str[i]==' ')
		{
			space_count++;
		}
	}
	int newlength=length+2*space_count;
	str[newlength]='\0';
	for(int i=length-1;i>0;i--)
	{
		if(str[i]==' ')
		{
			str[newlength-1]='0';
			str[newlength-2]='2';
			str[newlength-3]='%';
			newlength=newlength-3;
		}
		else
		{
			str[newlength-1]=str[i];
			newlength--;
		}
	}
	cout<<str;
return 0;
}
