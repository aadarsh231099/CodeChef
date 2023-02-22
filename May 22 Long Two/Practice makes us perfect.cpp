//https://www.codechef.com/problems/PRACTICEPERF
//Practice makes us perfect
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d,c0=0;
    cin>>a>>b>>c>>d;
    if(a>=10)c0++;
    if(b>=10)c0++;
    if(c>=10)c0++;
    if(d>=10)c0++;
    cout<<c0;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}