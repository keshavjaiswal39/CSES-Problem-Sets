#include<iostream>
#include<set>

using namespace std;

int main()
{
	
	set<unsigned long long int> s;
	unsigned long long int n;
	
	cin>>n;
	
	for(unsigned long long int i=0;i<n;i++)
	{
		unsigned long long int x;
		cin>>x;
		s.insert(x);
	}
	
	cout<<s.size();
}
