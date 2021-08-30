//https://www.codechef.com/problems/FLOW007
#include <bits/stdc++.h>
using namespace std;
void solve()
{
long long n,r=0,rev=0;
cin>>n;
while(n)
{
  r=n%10;
  rev=rev*10+r;
  n=n/10;
}
cout<<rev<<endl;
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
