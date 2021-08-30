//https://www.codechef.com/problems/REMISS
#include <bits/stdc++.h>
using namespace std;
void solve()
{
long long a,b;
cin>>a>>b;
cout<<max(a,b)<<" "<<a+b<<endl;
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
