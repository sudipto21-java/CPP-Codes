#include<iostream>
#include<math.h>

using namespace std;

int count(int n)
{
	return floor(log10(n))+1;
}

int reverse_1(int n)
{
	int t,num=0,place=pow(10,count(n));
	
	while(n>0)
	{
		t=n%10;
		n/=10;
		num=(t*place)+num;
		place/=10;
	}
	
	return num/10;
}

int reverse_2(int n)
{
	int reverse=0,lastdigit;
	
	while(n>0)
	{
		lastdigit=n%10;
		reverse=(reverse*10)+lastdigit;
		n/=10;
	}
	
	return reverse;
}

int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	cout<<"from first method\n"<<reverse_1(n)<<"\nfrom second method\n"<<reverse_2(n);
	return 0;
}
