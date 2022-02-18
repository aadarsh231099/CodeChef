//https://www.codechef.com/START10C/problems/HARDBET
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int sa,sb,sc;
  cin>>sa>>sb>>sc;
  if(min(min(sa,sb),sc)==sa)
    cout<<"Draw"<<endl;
  else if(min(min(sa,sb),sc)==sb)
    cout<<"Bob"<<endl;
  else
    cout<<"Alice"<<endl;
 
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