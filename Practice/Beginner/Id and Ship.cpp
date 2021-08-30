//https://www.codechef.com/submit/FLOW010
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  char s;
  cin>>s;
  if(s=='B' || s=='b')
    cout<<"BattleShip"<<endl;
  else if(s=='C' || s=='c')
    cout<<"Cruiser"<<endl;
  else if(s=='D' || s=='d')
    cout<<"Destroyer"<<endl;
  else
    cout<<"Frigate"<<endl;
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
