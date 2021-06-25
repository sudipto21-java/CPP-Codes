#include<iostream>

using namespace std;

int DecimalToBinary(int n)
{
	int i,max=1,binary=0,lastdigit;
	
	while(n>=max)
		max*=2;
	
	max/=2;
	
	while(max>0)
	{
		lastdigit=n/max;
		n-=lastdigit*max;
		max/=2;
		binary=10*binary+lastdigit;
	}
	
	return binary;
}

int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	
	cout<<"binary equivalent of "<<n<<" is "<<DecimalToBinary(n);
	
	return 0;
}
