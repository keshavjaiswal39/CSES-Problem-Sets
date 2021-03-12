#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
		
	while(n--)
	{
		long long int x,y;
		cin>>x>>y;
		
		long long int diag=max(x,y);
		long long int diag_val=diag*diag-(diag-1);
		
		if(diag%2==0)
		{
			if(x<y)
			{
				cout<<diag_val-(y-x)<<endl;
			}
			else
			{
				cout<<diag_val+(x-y)<<endl;
			}
		}
		else
		{
			if(x<y)
			{
				cout<<diag_val+(y-x)<<endl;
			}
			else
			{
				cout<<diag_val-(x-y)<<endl;
			}
		}
	}

}
