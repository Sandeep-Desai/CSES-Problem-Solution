#include <bits/stdc++.h>
 
using namespace std;
 
// #define RIP(i,a,b) for(long long int i=a;i<b;i++)
 
 
int main() 
{
	
	int n;
	cin>>n;
	int arr[n];
	if(n>4)
	{
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	for(int i=n-1;i>=0;i=i-2)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=n-2;i>=0;i=i-2)
	{
		cout<<arr[i]<<" ";
	}
	}
	else if(n==1)
	{
		cout<<"1";
	}
	
    else if(n==4)
    {
    	cout<<"2 4 1 3";
    } 
	else{
		cout<<"NO SOLUTION";
	}
	return 0;
	
	}