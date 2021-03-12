#include<bits/stdc++.h>
using namespace std;

void TOH(int n, int A,int B,int C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);

		cout<<A<<" "<<C<<endl;
		
		TOH(n-1,B,A,C);
	}
}

int TOH_count(int n, int A,int B,int C)
{
	static int count=0;
	
	if(n>0)
	{
		TOH_count(n-1,A,C,B);

		TOH_count(n-1,B,A,C);
		
		count++;
		
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	
	cout<<TOH_count(n,1,2,3)<<endl;
	TOH(n,1,2,3);
}
