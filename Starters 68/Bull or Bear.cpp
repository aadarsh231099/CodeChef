//https://www.codechef.com/problems/BULLBEAR
//Bull or Bear
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x==y)cout<<"NEUTRAL"<<endl;
    else if(x>y)cout<<"LOSS"<<endl;
    else
    cout<<"PROFIT"<<endl;
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