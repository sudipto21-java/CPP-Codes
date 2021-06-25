#include<iostream>

using namespace std;

int OctalToDecimal(int n)
{
	int base=1,decimal=0,lastdigit;
	
	while(n>0)
	{
		lastdigit=n%10;
		decimal+=lastdigit*base;
		base*=8;
		n/=10;
	}
	
	return decimal;
}

int main()
{
	int n;
	cout<<"enter an octal number:";
	cin>>n;
	cout<<"Decimal equivalent of "<<n<<" is: "<<OctalToDecimal(n);
	return 0;
}
