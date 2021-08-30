//https://www.codechef.com/START6C/problems/CRICRANK/
#include <bits/stdc++.h>
using namespace std;
# define ll long long 
void solve()
{
  int r1,w1,c1,r2,w2,c2,a=0,b=0;
  cin>>r1>>w1>>c1;
  cin>>r2>>w2>>c2;
  if(r1>r2)a++;
  else
    b++;
  if(w1>w2)a++;
  else
    b++;
  if(c1>c2)a++;
  else
    b++;
  if(a>b)
    cout<<"A"<<endl;
  else
    cout<<"B"<<endl;
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



