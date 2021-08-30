//https://www.codechef.com/problems/FLOW018
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll fact(int n)
{
  if(n==0)
    return 1;
  if(n==1)
    return 1;
  return n*fact(n-1);
}
void solve()
{
  int n;
  cin>>n;
  cout<<fact(n)<<endl;
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
