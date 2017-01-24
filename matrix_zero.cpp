#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\n Enter the size of matrix";//not be greater than than because row and column has capacity of 10
	cin>>n;
	int matrix[n][n];
	int row[10]={0};
	int column[10]={0};
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>matrix[i][j];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			{
				if(matrix[i][j]==0)
				{
					row[i]=1;
					column[j]=1;
				}
			}
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			{
				if((row[i]==1) || (column[j]==1))
				{
					matrix[i][j]=0;
				}
			}
			
	cout<<"\n New Matrix will be:="<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<matrix[i][j];
		cout<<endl;
	}
return 0;
}
