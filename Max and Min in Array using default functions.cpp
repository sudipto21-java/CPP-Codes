#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"enter size:";
	cin>>n;
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"enter element:";
		cin>>arr[i];
	}
	
	int ma=arr[0],mi=arr[0];
	
	for(i=0;i<n;i++)
	{
		ma=max(ma,arr[i]);
		mi=min(mi,arr[i]);
	}
	
	cout<<"max element of array is: "<<ma<<endl<<"min element of array is: "<<mi;
	return 0;
}
