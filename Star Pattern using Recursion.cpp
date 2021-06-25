/* *
   **
   ***
   ****
   ***** */


#include<iostream>

using namespace std;

void pattern_using_recur(int n)
{
	if(n==1)
	{
		cout<<"*"<<endl;
		return;
	}
	
	pattern_using_recur(n-1);
	
	while(n-->=1)
	{
		cout<<"*";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"enter row count"<<endl;
	cin>>n;
	pattern_using_recur(n);
	return 0;
}
