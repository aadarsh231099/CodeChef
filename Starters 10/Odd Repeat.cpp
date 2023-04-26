//https://www.codechef.com/problems/REPEAT
//Odd Repeat

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N,K,S;
	cin>>N>>K>>S;
	int i=1,sum=0;
	sum+=N*N+(K-1);
	int ans=1;
	i = 3;
	while(i<=N*2-1 && sum!=S){
	    if(i%2!=0){
	        sum=sum-(ans*K)+ans+(i*K)-i;
	        ans = i;
	        
	    }
	        i++;
	    }
	    cout<<ans<<endl;
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