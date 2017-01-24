#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	cin>>str;
	int tail=1;
	int j;
	int len=strlen(str);
	for(int i=1;i<len;i++)//   jayyesh   a check j  )
	 {
	 	for(j=0;j<tail;j++)
	 	{
	 		if(str[i]==str[j])
	 		break;
	 	}
	 	
	 	if(tail==j)
	 	{
	 		str[tail]=str[i];
	 		++tail;
	 	}
	 }
	 str[tail]='\0';
	 cout<<"new String"<<str;
	return 0;
}
