#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k,l;
	
	cout<<"enter value of n:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		
		for(k=0;k<=i;k++)
		{
			cout<<"*";
		}
		
		for(l=0;l<i;l++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	for(i=n;i>=0;i--)
	{
		for(j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		
		for(k=0;k<=i;k++)
		{
			cout<<"*";
		}
		
		for(l=0;l<i;l++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	return 0;
}
