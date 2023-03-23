//https://www.codechef.com/problems/DIFFCONSEC
//Different Consecutive Characters
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int n,c=0;
    cin>>n;
    cin>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i])c++;
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