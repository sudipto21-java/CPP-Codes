/* Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to 
  choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to 
  determine the length of the longest contiguous arithmetic subarray. */

#include<iostream>

using namespace std;

int LenOfLongestArithmaticSubArray(int arr[], int n)
{
	int i,len=2,mlen=0;
	int difprev=arr[1]-arr[0];
	
	for(i=2;i<n;i++)
	{			
		if(difprev==arr[i]-arr[i-1])
		{
			len++;
		}
		else
		{
			difprev=arr[i]-arr[i-1];
			len=2;
		}	
		mlen=max(len,mlen);	
	}

	return mlen;
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
	
	cout<<"longest lenght of contiguous arithmatic subarray is: "<<LenOfLongestArithmaticSubArray(arr,n);
	
	return 0;
}
