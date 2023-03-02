//https://www.codechef.com/problems/GDTURN
//Good Turn
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if((x+y)>6)cout<<"YES"<<endl;
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