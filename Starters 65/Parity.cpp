//https://www.codechef.com/problems/PAR2
//Parity
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  if(n%2==0)cout<<"yes"<<endl;
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