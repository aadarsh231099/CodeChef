//https://www.codechef.com/problems/REACH_HOME
//Reach Home

#include <bits/stdc++.h>
using namespace std;
void solve(){
    double x,y;
    cin>>x>>y;
    if(y/5.0<=x)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  
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