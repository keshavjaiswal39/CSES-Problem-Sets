#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	vector<int> v1,v2;
	
	int sum=n*(n+1)/2;
	
	if(sum%2!=0 or sum==0)
	{
		cout<<"NO";
		return 0;
	}
	else
	{
		if(n%4==0)
		{
			// means both array will have 4 elements
			
			for(int i=1;i<=(n/4);i++)
			{
				v1.push_back(i);
				v1.push_back(n-i+1);
			}
			
			int s=(n/4)+1;
			int e=n-(n/4);
			
			for(int i=s;i<=e;i++)
			{
				v2.push_back(i);
			}
		}
		
		else
		{
			// means one vector will have n/2 elements and other will have n/2-1 elements
			
			for(int i=1;i<=((n+1)/4);i++)
			{
				v1.push_back(i);
				v1.push_back(n-i);
			}
			
			int s=((n+1)/4)+1;
			int e=n-((n+1)/4)-1;
			
			for(int i=s;i<=e;i++)
			{
				v2.push_back(i);
			}
			v2.push_back(n);
			
			
		}
	}
	
	cout<<"YES"<<endl;
	
	cout<<v1.size()<<endl;
			
	for(auto x:v1)
	{
		cout<<x<<" ";
	}
	
	cout<<endl;
	
	cout<<v2.size()<<endl;
	
	for(auto y:v2)
	{
		cout<<y<<" ";
	}
	
}
