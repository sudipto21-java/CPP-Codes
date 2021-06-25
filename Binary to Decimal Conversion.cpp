#include<iostream>

using namespace std;

int BinaryToDecimal(int n)
{
	int base=1,lastdigit,decimal=0;
	
	while(n>0)
	{
		lastdigit=n%10;
		decimal+=lastdigit*base;
		n/=10;
		base*=2;
	}
	
	return decimal;
}

int main()
{
	int n;
	cout<<"enter a binary number:";
	cin>>n;
	cout<<"Decimal equivalent of "<<n<<" is: "<<BinaryToDecimal(n);
	return 0;
}
