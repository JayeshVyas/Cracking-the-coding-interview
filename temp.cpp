#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int k;
	cin>>n;
	cin>>k;
	int arr[n];
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int location;
	int l1=n-k+1;
	
	for(int i=0;i<l1;i++)
	{
		int m=arr[i];
		for(int j=i+1;j<k-1;j++)
		{
			m=m^arr[j];
		}
		arr1[i]=m;
		arr2[m]=i;
		
	}
	int min=arr2[0];
	 for ( int c = 0 ; c < l1 ; c++ ) 
    {
        if ( arr2[c] < min ) 
        {
           min = arr2[c];
           location = c+1;
        }
    } 
	//int g=*std::min_element(arr1,arr1+l1);
	cout<<location+1;
	
}
