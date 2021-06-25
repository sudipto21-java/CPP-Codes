#include<iostream>

using namespace std;

int fact(int n)
{
	if(n<=1)
		return 1;
	
	return n*fact(n-1);
}

int ncr(int n, int r)
{
	return fact(n)/(fact(r)*fact(n-r));
}

void PascalTriangle(int n)
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<ncr(i,j)<<"  ";
		}
		
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"enter row count"<<endl;
	cin>>n;
	PascalTriangle(n);
	return 0;
}
