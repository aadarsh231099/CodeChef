//https://www.codechef.com/problems/SINGLEUSE
//Single-use Attack
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int h,x,y,count;
  cin>>h>>x>>y;
  if(h>=y){
  if(((h-y)%x)!=0)
  count=((h-y)/x)+2;
  else
  count=((h-y)/x)+1;
  cout<<count<<endl;
  }
  else
  cout<<ceil(h/x)<<endl;
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