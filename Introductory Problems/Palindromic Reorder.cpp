#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	string s;
	cin>>s;

	int i=0,j=s.length()-1;
	int k;
	
	while(i<j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		if(s[i]!=s[j])
		{
			k=j-1;
			while(s[k]!=s[i])
			{
				k--;
			}
	
			if(s[k]==s[i])
			{
				swap(s[k],s[j]);
				j--;
				i++;
			}
		}
	}
	
	i=0;j=s.length()-1;
	while(i<j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		else
		{
			cout<<"NO SOLUTION";
			return 0;
		}
	}
	cout<<s;
	
}
