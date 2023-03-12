//https://www.codechef.com/problems/KITCHENCOST
//Cost of Groceries
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=x)c+=b[i];
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