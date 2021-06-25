/* Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors
   on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

 1. The number of visitors on the day is strictly larger than the number of visitors on each of the previous 
    days.
 2. Either it is the last day, or the number of visitors on the day is strictly larger than the number of 
    visitors on the following day.
    
Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.  */

#include<iostream>

using namespace std;

int chk_brute(int arr[], int n)
{
	int i,days=0,j,f=0;
	
	for(i=0;i<n;i++)
	{
		if(i==0 && arr[i]>arr[i+1])
				days++;
				
		else if(i>0 && i<n)
		{
			j=i-1;
			while(j>=0)
			{		
				if(arr[i]>arr[j])
					f=1;
				else
				{
					f=0;
					break;
				}
				j--;
			}
		}
		
		if(f!=0 && arr[i]>arr[i+1] && i<n-1)
			days++;
		
		if(i==n-1 && f!=0)
			days++;
	}
	
	return days;
}

int chk_opt(int arr[], int n)
{
	int i,days=0,grt=-1;
	
	if(n==1)
		return 1;
		
	for(i=0;i<n;i++)
	{	
		if(arr[i]>grt && arr[i]>arr[i+1])
			days++;
			
		grt=max(arr[i],grt);
	}
	return days;
}

int main()
{
	int n;
	cout<<"enter total count of days:";
	cin>>n;
	
	int b_arr[n],i,o_arr[n+1];
	
	for(i=0;i<n;i++)
	{
		cout<<"enter number of visiters on day:"<<i+1<<endl;
		cin>>b_arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		o_arr[i]=b_arr[i];
	}
	o_arr[n]=-1;
	
	cout<<"\ncount of record breaking days is\nBy brute force:"<<chk_brute(b_arr,n);
	cout<<"\nBy optimised approach:"<<chk_opt(o_arr,n+1);
	
	return 0;
}
