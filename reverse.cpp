#include<iostream>
#include<string.h>
using namespace std;

void check_string(char *str)
{
	char *end=str;
	char temp;
	while(*end!='\0')
	{
		++end;
	}
	int len=strlen(str);
	len=len+1;
	while(len--)
	{
		temp=*end;
		cout<<temp;
		*end--;
	}	
}
int main()
{
	char str[100];
	cin>>str;
	check_string(str);
	
}
