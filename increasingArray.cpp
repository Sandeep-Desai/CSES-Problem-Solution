#include <bits/stdc++.h>
 
using namespace std;
 
// #define RIP(i,a,b) for(long long int i=a;i<b;i++)
 
 
int main() 
{
	
	int n;
	long long count=0;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i!=0)
		{
			if(arr[i]<arr[i-1])
			{
				count=count+arr[i-1]-arr[i];
				arr[i]=arr[i-1];
 
			}
		}
	}
	cout<<count;
	return 0;
}