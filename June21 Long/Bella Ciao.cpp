//https://www.codechef.com/JUNE21C/problems/CHFHEIST
#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long D,d,P,Q,sum=0;
  cin>>D>>d>>P>>Q;
  long r=D/d,s=D%d;
  sum=D*P+d*Q*((r*(r-1))/2)+r*s*Q;
  cout<<sum<<"\n";
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}