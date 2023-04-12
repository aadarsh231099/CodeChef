//https://www.codechef.com/problems/MELTGOLD
//Melt Gold

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x,y,i;
  cin>>x>>y;
  for(i=1;i<=100000;i++)
  {
      y=y+i;
      if(y>=x){ 
      cout<<i<<endl;
      break;
  }
  }
  
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