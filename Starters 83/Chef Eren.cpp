//https://www.codechef.com/START83D/problems/CHEFEREN
//Chef Eren
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int c=0;
    if(n%2==0)
    {
        c=((n/2)*a)+((n/2)*b);
    }
    else
    {
        c=(((n/2)+1)*b)+((n/2)*a);
    }
    cout<<c<<endl;
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