#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int i=0;
	int j=1;
	int count=0;
	int max_count=0;
	
	while(s[i]!='\0')
	{
		while(s[i]==s[j])
		{
			j++;
		}
		
		count=j-i;
		
		max_count=max(count,max_count);
		
		i=j;
		j++;
	}
	cout<<max_count;
}
