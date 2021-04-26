#include <bits/stdc++.h>
 
using namespace std;
 
// #define RIP(i,a,b) for(long long int i=a;i<b;i++)
 
 
int main() 
{
		
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y;
		
		cin>>x>>y;
		long long int n=max(x,y);
		long long int m=min(x,y);
		long long int diagonal=(n*n)-n+(1);
		// cout<<diagonal<<endl;
		if(n%2==0)
		{
		if(x==m)
		{
			cout<<diagonal-(n-x)<<endl;
		}
		else if(y==m)
		{
			cout<<diagonal+(n-y)<<endl;
		}
	    }
	    if(n%2==1)
		{
		if(x==m)
		{
			cout<<diagonal+(n-x)<<endl;
		}
		else if(y==m)
		{
			cout<<diagonal-(n-y)<<endl;
		}
	    }
	}
	return 0;
	
}
	