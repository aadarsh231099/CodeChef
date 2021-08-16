//https://www.codechef.com/AUG21C/problems/OLYRANK/
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int g1,s1,b1,g2,s2,b2;
  cin>>g1>>s1>>b1>>g2>>s2>>b2;
  if((g1+s1+b1)>(g2+s2+b2))
    cout<<"1"<<endl;
  else
    cout<<"2"<<endl;
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