#include <iostream>
 
using namespace std;
 
 
int main() 
{
	long long int n;
	int m;
	cin>>n;
	int i=0;
	long long int sum=((n)*(n+1))/2;
	long long int sum2=0;
	while(i<(n-1))
	{
		cin>>m;
		sum2=sum2+m;
		// cout<<sum2-m<<" "<<m<<endl;
		i=i+1;
		// if(m==1)
		// {
		// 	cout<<m<<endl;
		// }
	}
	cout<<(sum-sum2);
	return 0;
}