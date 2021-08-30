//https://www.codechef.com/problems/PALL01
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n,num=0,r=0,rev=0;
  cin>>n;
  num=n;
  while(n)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  if(num==rev)
    cout<<"wins"<<endl;
  else
    cout<<"loses"<<endl;
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
