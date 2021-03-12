#include<bits/stdc++.h>
using namespace std;

unsigned long long int sum_of_given_nos(unsigned long long int arr[],unsigned long long int n)
{
	unsigned long long int sum=0;
	for(unsigned long long int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int main()
{
	unsigned long long int n;
	cin>>n;
	unsigned long long int arr[1000005];
	for(unsigned long long int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	unsigned long long int tot_sum=(n)*(n+1)/2;
	unsigned long long int missing=tot_sum-sum_of_given_nos(arr,n);
	cout<<missing;
}
