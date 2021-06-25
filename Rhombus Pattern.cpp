#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k;
	
	cout<<"enter value of n:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i;k++)
		{
			cout<<" ";
		}
		
		for(j=0;j<n;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}
