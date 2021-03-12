#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int denom=5,total_count=0;
	while(n/denom)
	{
		total_count+=n/denom;
		denom*=5;
	}
	
	cout<<total_count;
}

/*

int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=5;i<=n;i*=5)
	{
		ans+=n/i;
	}
	cout<<ans;
}

*/
