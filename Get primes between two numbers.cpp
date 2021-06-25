#include<iostream>
#include<math.h>

using namespace std;

void getPrimes(int a, int b)
{
	int i,j,flag;
	
	for(i=a;i<=b;i++)
	{
		flag=0;
		
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;	
			}
		}
		
		if(flag!=1)
			cout<<i<<"\t";
	}
}

int main()
{
	int a,b;
	cout<<"enter two numbers\n";
	cin>>a>>b;
	getPrimes(a,b);
	return 0;
}
