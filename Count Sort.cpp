#include<iostream>

using namespace std;

void countsort(int arr[], int n) {
	
	int temp[n],max=arr[0],i;
	
	for(i=0;i<n;i++) {
		
		if(max<arr[i])
			max=arr[i];
	}
	
	int count[max];
	
	for(i=0;i<max;i++) {
		
		count[i]=0;
	}
	
	for(i=0;i<n;i++) {
		
		count[arr[i]]+=1;
	}
	
	for(i=1;i<=max;i++) {
		
		count[i]+=count[i-1];
	}
	
	for(i=0;i<n;i++) {
		
		temp[count[arr[i]]-1]=arr[i];
		count[arr[i]]-=1;
	}
	
	for(i=0;i<n;i++) {
		
		arr[i]=temp[i];
	}
}

void print(int arr[], int n) {
	
	for(int i=0;i<n;i++) {
		
		cout<<arr[i]<<" ";
	}
}

int main() {
	
	int arr[]={7,5,4,2,2,4,4,3,2,5};
	int n=sizeof(arr)/sizeof(int);
	countsort(arr,n);
	print(arr,n);
	return 0;
}
