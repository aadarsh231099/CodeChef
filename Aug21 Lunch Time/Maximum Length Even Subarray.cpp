//https://www.codechef.com/LTIME99C/problems/MXEVNSUB
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n,s=0;
  cin>>n;
  int num=n;
  while(n)
  {
    s+=n;
    n-=1;
  }
  if(s%2==0)
    cout<<num<<endl;
  else
    cout<<num-1<<endl;
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
