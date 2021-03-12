#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int ans=n;
	while(ans!=1)
	{
		cout<<ans<<" ";
		if(ans%2==0)
		{	
			ans=ans/2;
		}
		else
		{
			ans=ans*3+1;
		}
	}
	cout<<ans;
}
