//https://www.codechef.com/START8C/problems/PENALTY
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a[10],se=0,so=0;
  for (int i = 0; i < 10; ++i)
  {
    cin>>a[i];
  }
for(int i=0;i<10;i=i+2)
{
  se=se+a[i];
}
for(int i=1;i<10;i=i+2)
{
  so=so+a[i];
}
if(se>so)
cout<<1<<endl;
else if(so>se)
cout<<2<<endl;
else
cout<<0<<endl;
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
