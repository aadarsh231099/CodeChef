//https://www.codechef.com/AUG21C/problems/PROBDIFF
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int arr[4],c=0,t;
    for(int i=0;i<4;i++)
        cin>>arr[i];
    sort(arr,arr+4);
    for(int j=1;j<4;j++)
    {
        if(arr[j]!=arr[j-1])
        {   
            c++; 
            t=j;
        }
    }
    
    if(t==2&&c==1)
        cout<<2<<endl;
    else if(c>=2)
        cout<<2<<endl;
    else if(c==1)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
      solve();
    return 0;
}

