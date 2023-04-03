//https://www.codechef.com/problems/MAXCAP
//Maximum Capacity

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x*y>500 || x>8)cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  
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