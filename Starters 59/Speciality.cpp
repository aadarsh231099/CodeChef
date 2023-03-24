//https://www.codechef.com/problems/SPECIALITY
//Speciality
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z)cout<<"Setter"<<endl;
    else if(y>x && y>z)cout<<"Tester"<<endl;
    else
    cout<<"Editorialist"<<endl;
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