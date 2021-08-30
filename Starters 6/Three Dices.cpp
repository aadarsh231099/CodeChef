//https://www.codechef.com/START6C/problems/THREDICE
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    if((x+y)>=6)
        cout<<0<<endl;
    else
    cout<<fixed<<setprecision(10)<<((6-(x+y))/6.0)<<endl;
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

