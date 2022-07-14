//https://www.codechef.com/START33B/problems/CABS/
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x,y;
  cin>>x>>y;
  if(x<y)
  cout<<"FIRST"<<endl;
  else if(x>y)
  cout<<"SECOND"<<endl;
  else
  cout<<"ANY"<<endl;
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