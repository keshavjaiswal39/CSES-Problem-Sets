#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		
		cout<<((a+b)%3==0 and 2*a>=b and 2*a>=b?"YES":"NO")<<endl;
		
	/*	if((a+b)%3==0 and 2*a>=b and 2*b>=a)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		*/
	}
}
