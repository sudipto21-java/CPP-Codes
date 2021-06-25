#include<iostream>

using namespace std;

int main()
{
	int n,i,k,j;
	
	cout<<"enter number of rows:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{		
		for(k=n-i;k>=1;k--)
		{
			cout<<" ";
		}
		
		for(j=1;j<=i;j++)
		{
			if (j==1 || j==i)
				cout<<j;
			cout<<"  ";
		}
		
		cout<<endl;
	}
	
	for(i=4;i>=1;i--)
	{
		for(k=n-i;k>=1;k--)
		{
			cout<<" ";
		}
		
		for(j=1;j<=i;j++)
		{
			if (j==1 || j==i)
				cout<<j;
			cout<<"  ";
		}
		
		cout<<endl;
	}
	
	return 0;
}
