//https://www.codechef.com/problems/AIRLINES
//Codechef Airlines
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(y>x*10)cout<<z*(x*10)<<endl;
    else
    cout<<y*z<<endl;
  
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