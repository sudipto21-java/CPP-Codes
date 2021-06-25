#include<iostream>

using namespace std;

int fact(int f)
{
	if(f<=1)
		return 1;
		
	return f*fact(f-1);
}

int calcNCR(int n, int r)
{
	return fact(n)/(fact(n-r)*fact(r));
}

int main()
{
	int n,r;
	cout<<"enter value of n and r\n";
	cin>>n>>r;
	cout<<"ncr is:"<<calcNCR(n,r);
	return 0;
}
