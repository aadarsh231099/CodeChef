//https://www.codechef.com/problems/CHOPRT
#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int a,b;
 cin>>a>>b;
 if(a>b)
  cout<<">"<<endl;
else if(a<b)
  cout<<"<"<<endl;
else
  cout<<"="<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
