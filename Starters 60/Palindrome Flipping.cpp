//https://www.codechef.com/problems/FLIPPAL
//Palindrome Flipping
#include <bits/stdc++.h>
using namespace std;

bool can_convert_to_palindrome(string s) {
    int n=s.size();
    vector<int> freq(2, 0);
    for (int i=0;i<n;i++) {
        freq[s[i]-'0']++;
    }
    if (n%2==0&&freq[0]%2==1) {
        return false;
    }
    int odd_freq=count_if(freq.begin(),freq.end(),[](int x){return x%2==1;});
    return odd_freq<=1;
}


void solve(){
        int n;
        string s;
        cin>>n>>s;
        if (can_convert_to_palindrome(s)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
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