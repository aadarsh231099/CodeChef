//https://www.codechef.com/AUG21C/problems/SPCTRIPS
#include <bits/stdc++.h>
using namespace std;
void solve(){
int num,co=0;
cin>>num;
for(int c=1;c<=num;c++)
{
  for(int b=c;b<=num;b=b+c)
  {
    for(int a=c;a<=num;a=a+b)
    {
      if(a%b==c)
        co++;
    }
  }
}
cout<<co<<endl;
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