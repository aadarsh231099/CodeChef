//https://www.codechef.com/LTIME96C/problems/TANDJ1
#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,k,a,b,x,res;
  cin>>n>>k>>a>>b>>x;
  res=abs(k-b)+abs(n-a);
  if(res>x){cout<<"NO"<<"\n";return;}
  if(res==x){
    cout<<"YES"<<"\n";
    return;
  }
  if((x-res)%2==0){cout<<"YES"<<"\n";return;}
  cout<<"NO"<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  long long t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}