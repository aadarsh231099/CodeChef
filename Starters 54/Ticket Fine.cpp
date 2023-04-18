//https://www.codechef.com/problems/TCKTFINE
//Ticket Fine

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,p,q;
    cin>>x>>p>>q;
    cout<<abs(p-q)*x<<endl;
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