#include <iostream>
 
using namespace std;
int N=1e7;
 
int main() 
{
	
	long long int n;
	cin>>n;
	while(true){
		cout<<n<<" ";
		if(n%2==0)
		{
			n=n/2;
		}
		else if(n==1){
			break;
		}
		else{
			n=3*n+1;
		}
		
	}
 
	return 0;
}