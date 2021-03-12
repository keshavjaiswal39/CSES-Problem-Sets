#include<iostream>
using namespace std;

int main()
{
	long long n;
	long long p=1;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		p=2*p%(1000000007);
	}
	cout<<p;

}
