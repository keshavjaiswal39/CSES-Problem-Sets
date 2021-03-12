#include<bits/stdc++.h>
#include<algorithm>
#include<climits>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	
	int a[n];
	
	long long int sum=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	
	long long int ans=INT_MAX;
	for(int i=0;i<(1<<n);i++)
	{
		long long int csum=0;
		for(long long int j=0;j<n;j++)
		{
			if(1<<j & i)
			{
				csum+=a[j];
			}
			ans=min(ans,abs(sum-2*csum));
		}
	}
	cout<<ans;
}
