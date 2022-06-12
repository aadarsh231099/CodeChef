https://www.codechef.com/submit-v2/FACEDIR
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%4==0)
    cout<<"North"<<endl;
    else if(n%4==1)
    cout<<"East"<<endl;
    else if(n%4==2)
    cout<<"South"<<endl;
    else
    cout<<"West"<<endl;
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