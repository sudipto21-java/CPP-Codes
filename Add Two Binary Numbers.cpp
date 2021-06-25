#include<bits/stdc++.h>

using namespace std;

int reverse(int num)
{
	int result=0,lastdigit;
	
	while(num>0)
	{
		lastdigit=num%10;
		result=(result*10)+lastdigit;
		num/=10;
	}
	
	return result;
}

int addBinary(int a, int b)
{
	int sum=0,carry=0;
	
	while(a>0 && b>0)
	{	
		if(a%2==0 && b%2==0)
		{
			sum=sum*10+carry;
			carry=0;
		}
		
		else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
		{
			if(carry==1)
			{
				sum=sum*10+0;
				carry=1;
			}
				
			else
			{
				sum=sum*10+1;
				carry=0;
			}		
		}
		
		else
		{
			sum=sum*10+carry;
			carry=1;
		}
		
		a/=10;
		b/=10;
	}
	
	while(a>0)
	{
		if(carry==1)
		{
			if(a%2==1)
			{
				sum=sum*10+0;
				carry=1;
			}
			
			else
			{
				sum=sum*10+1;
				carry=0;
			}
		}
		
		else
		{
			sum=sum*10+(a%2);
		}
		
		a/=10;
	}
	
	while(b>0)
	{
		if(carry==1)
		{
			if(b%2==1)
			{
				sum=sum*10+0;
				carry=1;
			}
			
			else
			{
				sum=sum*10+1;
				carry=0;
			}
		}
		
		else
		{
			sum=sum*10+(b%2);
		}
		
		b/=10;
	}
	
	if(carry==1)
		sum=sum*10+1;
		
	sum=reverse(sum);
	
	return sum;
}

int main()
{
	int b1,b2;
	cout<<"enter two binary numbers\n";
	cin>>b1>>b2;
	
	cout<<"sum is: "<<addBinary(b1,b2);
	
	return 0;
}
