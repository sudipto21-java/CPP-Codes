#include<iostream>

using namespace std;

void max_till_i(int arr[], int size)
{
	int i,mx=arr[0];
	
	for(i=0;i<size;i++)
	{
		mx=max(mx,arr[i]);
		cout<<mx<<"\t";
	}
}

int main()
{
	int n,i;
	cout<<"enter size of array:";
	cin>>n;
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"enter element:";
		cin>>arr[i];
	}
	
	max_till_i(arr,n);
	
	return 0;
}
