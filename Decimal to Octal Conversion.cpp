#include<iostream>

using namespace std;

int DecimalToOctal(int n)
{
	int octal=0,max=1,lastdigit;
	
	while(n>=max)
		max*=8;
		
	max/=8;
	
	while(max>0)
	{
		lastdigit=n/max;
		n-=lastdigit*max;
		max/=8;
		octal=octal*10+lastdigit;
	}
	
	return octal;
}

int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	
	cout<<"Octal equivalent of "<<n<<" is "<<DecimalToOctal(n);
	
	return 0;
}
