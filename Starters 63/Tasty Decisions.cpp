//https://www.codechef.com/problems/TASTEDEC
//Tasty Decisions
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x*2>y*5)cout<<"Chocolate"<<endl;
    else if(x*2<y*5)cout<<"Candy"<<endl;
    else
    cout<<"Either"<<endl;
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