https://www.codechef.com/MAY21C/problems/SOLBLTY/
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,res;
	cin>>a>>b>>c;
	res=(b+(100-a)*c)*10;
	cout<<res<<"\n";
	
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