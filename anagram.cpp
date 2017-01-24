#include<iostream>
#include<string.h>
using namespace std;

int check_string(char str1[],char str2[])
{
	char first_str[26]={0};
	char second_str[26]={0};
	
	int c=0;
	while(str1[c]!='\0')
	{
		first_str[str1[c++]-'a']++;
	}
	c=0;
	while(str2[c]!='\0')
	{
		second_str[str2[c++]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(first_str[i]!=second_str[i])
		return 0;
	}
	return 1;
	
}
int main()
{
	char str1[100];
	char str2[100];
	
	cin>>str1;
	cin>>str2;
	int flag=check_string(str1,str2);
	
	if(flag==1)
		cout<<"Yes It Is Anagram";
	else
		cout<<"Not Anagram";
}
