https://www.codechef.com/MAY21C/problems/XOREQUAL/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    const unsigned int M = 1000000007;
    long long n,flag=1;
    unsigned long long y=2;
	cin>>n;
    int z=n-1;
	y=y%M;
	if(y==0)
	    {
	        cout<<0<<endl;
	        return;
	    }
	while(z)
    {
	   if(z&1){
	       flag=(flag*y)%M;
	   }
	   z=z/2;
	    y=(y*y)%M;
    }
    cout<<flag<<endl;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}