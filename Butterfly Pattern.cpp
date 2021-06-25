#include<iostream>
using namespace std;

int main()
{
	int n,i,j,space;
	cout<<"enter value of n:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		
		space=(n*2)-(i*2);
		
		for(j=0;j<space;j++)
		{
			cout<<" ";
		}
		
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		
		space=(n*2)-(i*2);
		
		for(j=0;j<space;j++)
		{
			cout<<" ";
		}
		
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	return 0;
}
