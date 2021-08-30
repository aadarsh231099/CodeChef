//https://www.codechef.com/problems/LUCKFOUR
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int c=0;
string s;
cin>>s;
for (int i = 0; i < s.length(); ++i)
{
  if(s[i]=='4')
    c++;
}
cout<<c<<endl;
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
