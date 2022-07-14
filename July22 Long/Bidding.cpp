//https://www.codechef.com/JULY221D/problems/AUCTION
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(max(a,max(b,c))==a)
    cout<<"Alice"<<endl;
    else if(max(a,max(b,c))==b)
    cout<<"Bob"<<endl;
    else
    cout<<"Charlie"<<endl;
  
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
