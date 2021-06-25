/* An arithmatic array is an array that contains at least 2 integers and the difference b/w two consecutive 
integers are same. for eg. [9,10], [3,3,3], [9,7,5,3] are arithmatic arrays */

#include<iostream>

using namespace std;

void CheckArithmaticArray(int arr[], int n)
{
	int pd=arr[1]-arr[0],i,f=0;

	for(i=2;i<n;i++)
	{
		if(pd==arr[i]-arr[i-1])
			f=1;
		else
			f=0;
	}
	
	if(f==1)
		cout<<"arithmatic array";
	else
		cout<<"not arithmatic array";
}

int main()
{
	int n;
	cout<<"enter count of elements:";
	cin>>n;
	
	int arr[n],i;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter element:";
		cin>>arr[i];
	}
	
	CheckArithmaticArray(arr,n);
	
	return 0;
}
