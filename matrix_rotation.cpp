#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int arr1[n][n];
	int arr2[n][n];
	int k=n;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr1[i][j];
			
	for(int i=0;i<n;i++)
		{
		k--;
		for(int j=0;j<n;j++)
			arr2[j][k]=arr1[i][j];
		}	
		
	cout<<"\n New Rotated matrix :="<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<arr2[i][j]<<" ";
		cout<<endl;
	}
return 0;
	
}
