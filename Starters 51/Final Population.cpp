//https://www.codechef.com/problems/POPULATION
//Final Population

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x,y,z;
  cin>>x>>y>>z;
  cout<<x-y+z<<endl;
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