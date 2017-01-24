#include<iostream>
using namespace std;
int main()
{
	int arr1[100];
	int arr2[100];
	int arr3[100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>arr2[j];
	}
	int i=0;
	int j=0;
	m=0;
	int k;
	while(i<n )
	{
		if(arr1[i]==arr2[j])
		{
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i];
			i++;
			j++;
		}
		else
		{
			if(arr1[i]>arr2[j])
			{
				arr3[k++]=arr1[j];
				i++;j++;
			}
		}
		
	}
	for(int m=0;m<k;m++)
	{
		cout<<arr3[m]<<endl;
	}
	

	
}
