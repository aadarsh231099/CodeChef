//https://www.codechef.com/problems/CARTRIP
//Car Trip
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x<=300)cout<<3000<<endl;
    else
    cout<<x*10<<endl;
  
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