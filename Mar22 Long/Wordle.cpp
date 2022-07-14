//https://www.codechef.com/problems/WORDLE

#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2,s3;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        s3+="B";
        else
        s3+="G";
    }cout<<s3<<endl;
  
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