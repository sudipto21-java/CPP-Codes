#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k,l;
	
	cout<<"enter value of n:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";	
		}
		
		for(j=i;j>1;j--)
		{
			cout<<j;
		}
		
		for(l=1;l<=i;l++)
		{
			cout<<l;
		}
		
		cout<<endl;
	}
	return 0;
}
