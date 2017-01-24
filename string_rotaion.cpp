#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string str1;
	string str2;
	
	cin>>str1;
	cin>>str2;
	
	str2=str2+str2;
	
	if(strstr(str2.c_str(),str1.c_str()))	
		cout<<"\n YES It Is Rotation of String 1";
	else
		cout<<"\ NO";
return 0;
}
