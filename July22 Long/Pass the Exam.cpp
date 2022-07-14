//https://www.codechef.com/JULY221D/problems/PASSTHEEXAM
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(((a+b+c)>=100) && a>=10 && b>=10 && c>=10)
    cout<<"PASS"<<endl;
    else
    cout<<"FAIL"<<endl;
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