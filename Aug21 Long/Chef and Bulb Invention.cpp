//https://www.codechef.com/AUG21C/problems/CHFINVNT
/*
#include <bits/stdc++.h>
using namespace std;
void solve(){
 long long int n,p,k,j=0,c=0;
 cin>>n>>p>>k;
 for(int i=0;i<n;i++)
 { j=i+k; 
  c++;
  if(i==p)
    {cout<<c<<endl;break;}
  c++;
  if(j==p)
    {cout<<c<<endl;break;}
}
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
void solve(){
 long long int n,p,k,rem=0,res=0,sum=0;
 cin>>n>>p>>k;
 rem=p%k;
 rem=rem-1;
 sum=((n-1)/k)*k;
 sum=n-1-sum;
 if(rem<=sum)
 {
  res=res+((n-1)/k+1)*(rem+1);
 }
else
{
  res=res+(sum+1)*((n-1)/k+1)+(rem-sum)*((n-1)/k);
}
for(int i=rem+1;i<n;i=i+k)
{
  res=res+1;   
  if(i==p)
  { cout<<res<<endl;
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