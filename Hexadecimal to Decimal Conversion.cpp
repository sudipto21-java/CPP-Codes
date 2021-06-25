#include<bits/stdc++.h>

using namespace std;

int HexadecimalToDecimal(string hex)
{
	char lastchar;
	
	int base=1,i,decimal=0;
	
	for(i=hex.size()-1;i>=0;i--)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			decimal+=(hex[i]-'0')*base;
		}
		
		else if(hex[i]>='A' && hex[i]<='Z')
		{
			decimal+=base*(hex[i]-'A'+10);
		}
		
		base*=16;
	}
	
	return decimal;
}

int main()
{
	string hex;
	cout<<"enter a hexadecimal number:";
	cin>>hex;
	cout<<"Decimal equivalent of "<<hex<<" is: "<<HexadecimalToDecimal(hex);
	return 0;
}
