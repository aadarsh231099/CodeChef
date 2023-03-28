//https://www.codechef.com/problems/CHEFGAMES
//Chefland Games
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int r1,r2,r3,r4;
    cin>>r1>>r2>>r3>>r4;
    if(r1 || r2 || r3 || r4)cout<<"OUT"<<endl;
    else
    cout<<"IN"<<endl;
  
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