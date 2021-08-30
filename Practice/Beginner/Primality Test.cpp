//https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{ 
  if(n<=1)
    return false;
  for(int i=2;i<n;i++)
    if(n%i==0)
      return false;
    return true;
}
void solve()
{
  int n;
  cin>>n;
  if(prime(n))
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl;
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
