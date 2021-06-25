#include<iostream>
#include<math.h>

using namespace std;

bool CheckPyTriplet(int a, int b, int c)
{
	int x,y,z;
	
	x=max(a,max(b,c));
	
	if(x==a)
	{
		y=b;
		z=c;
	}
	
	else if(x==b)
	{
		y=a;
		z=c;
	}
	
	else
	{
		y=a;
		z=b;
	}
	
	if(pow(x,2)==pow(y,2)+pow(z,2))
		return true;
	else
		return false;
}

int main()
{
	int a,b,c;
	cout<<"enter 3 numbers\n";
	cin>>a>>b>>c;
	
	if(CheckPyTriplet(a,b,c))
		cout<<"Pythagorian Triplets"<<endl;
	else
		cout<<"not Pythagorian Triplets"<<endl;
		
	return 0;
}
