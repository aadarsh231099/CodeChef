//https://www.codechef.com/submit/MINCOINSREQ
//Minimum Coins
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x<10)
    cout<<x<<endl;
    else
    cout<<(x%10)<<endl;
  
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