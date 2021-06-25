#include<iostream>

using namespace std;

int SumOfSubArrays(int arr[], int size)
{
	int sum=0,i,j,k;
	
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			for(k=i;k<=j;k++)
			{
				sum+=arr[k];
			}
		}
	}
	return sum;
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
	
	cout<<"sum of all subarrays is: "<<SumOfSubArrays(arr,n);
	
	return 0;
}
