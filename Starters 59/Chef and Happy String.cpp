//https://www.codechef.com/problems/HAPPYSTR
//Chef and Happy String
#include <bits/stdc++.h>
using namespace std;
bool isvowel(char t)
{
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')return true;
    else
    return false;
}
void solve(){
    string s;
    int c=0;
    cin>>s;
    for(int i=2;i<s.length();i++)
    {
        if(isvowel(s[i])&&isvowel(s[i-1])&&isvowel(s[i-2]))c++;
    }
        if(c>0)
        cout<<"Happy"<<endl;
        else
        cout<<"Sad"<<endl;
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