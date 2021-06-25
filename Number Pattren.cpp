#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n;
	cout<<"enter count of rows:";
	cin>>n;
	for(i=n;i>0;i--)
	{
		k=i;
		
		for(j=1;j<=n;j++)
		{
			cout<<k<<" ";
			if(k!=n)
				k++;
		}
		
		cout<<endl;
	}
	return 0;
}
