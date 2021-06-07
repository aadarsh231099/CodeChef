https://www.codechef.com/MAY21C/problems/LKDNGOLF/
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x,n,k;
	cin>>n>>x>>k;
        if(x%k==0)
        	cout<<"YES"<<"\n";
        else if((x%k)==((n+1)%k))
        	cout<<"YES"<<"\n";
        else
        	cout<<"NO"<<"\n";
		   	}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin>>t;
    while(t--)
    	solve();
	return 0;
}