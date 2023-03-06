//https://www.codechef.com/problems/TWORANGES
//Two Ranges
#include <bits/stdc++.h>
using namespace std;
void solve(){
   int a, b, c, d;
        cin >> a >> b >> c >> d;

        set<int> range1, range2;
        for (int i = a; i <= b; i++) {
            range1.insert(i);
        }
        for (int i = c; i <= d; i++) {
            range2.insert(i);
        }

        vector<int> unionVec(range1.size() + range2.size());
        auto it = set_union(range1.begin(), range1.end(), range2.begin(), range2.end(), unionVec.begin());

        int unionSize = it - unionVec.begin();

        cout << unionSize << endl;
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