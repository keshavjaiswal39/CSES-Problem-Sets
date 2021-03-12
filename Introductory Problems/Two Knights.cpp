#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;

	for(long long k=1;k<=n;k++)
	{
		long long size=k*k;
		long long total_ways=(size)*(size-1)/2; // here we divided by two because the knights are identical so placing n*n-1 times is for different knights
		
		if(k>2)
		{
			// we also need to take care that the knights do not attack
			// so we will substract total number of ways and the ways in which they can attack
			total_ways-=4*(k-1)*(k-2);	
		}	
		cout<<total_ways<<endl;
	}
}
