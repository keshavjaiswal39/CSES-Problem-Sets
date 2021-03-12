#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main()
{
	long long int n;
	cin>>n;
	long long int mx=0;
	long long int ans=0;
	
	for(long long int i=0;i<n;i++)
	{
		long long int x;
		cin>>x;
		
		mx=max(x,mx);
		ans+=mx-x;
	}
	cout<<ans;
}
