//https://www.codechef.com/problems/MONOPOLY
//Monopoly in Chefland

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int r1,r2,r3;
  cin>>r1>>r2>>r3;
  if(r1>(r2+r3)||r2>(r3+r1)||r3>(r1+r2))cout<<"YES"<<endl;
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