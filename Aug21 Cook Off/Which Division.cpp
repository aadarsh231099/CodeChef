https://www.codechef.com/COOK132C/problems/WHICHDIV
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int r;
    cin>>r;
    if(r>=2000)
    cout<<"1"<<endl;
    else if(r<1600)
    cout<<"3"<<endl;
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