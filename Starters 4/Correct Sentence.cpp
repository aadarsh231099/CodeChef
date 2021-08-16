https://www.codechef.com/START4C/problems/CORTSENT/
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int k,flag=0,f=0;
     cin>>k;
     for (int i = 0; i <k; ++i)
     {    string s;
          cin>>s;
          int lan1=0,lan2=0,lan3=0;
          flag=0;
          for (int j = 0; j<s.length(); ++j)
          {
              if(s[j]>='a'&&s[j]<='m'){
               lan1=1;
              }
              else if(s[j]>='N'&&s[j]<='Z'){
               lan2=1;
              }
              else lan3=1;
          }
          if(lan1==1&&lan2==0&&lan3==0)flag=1;
          if(lan2==1&&lan1==0&&lan3==0)flag=1;
          if(flag==0){f=1;}
     }
     if(flag==1&&f==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--)
          solve();
     return 0;
}