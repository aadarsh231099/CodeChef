https://www.codechef.com/MAY21C/problems/TCTCTOE/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s,s1,s2;
	int co=0,cx=0,cd=0,o=0,x=0;
	cin>>s>>s1>>s2;
	for(int j=0;j<3;j++)
	{
	    cx=cx+(s[j]=='X')+(s1[j]=='X')+(s2[j]=='X');
	    co=co+(s[j]=='O')+(s1[j]=='O')+(s2[j]=='O');
	}cd=9-(co+cx);
	if(s[0]=='O'&&s1[0]=='O'&&s2[0]=='O')
	o++;
	if(s[1]=='O'&&s1[1]=='O'&&s2[1]=='O')
	o++;
	if(s[2]=='O'&&s1[2]=='O'&&s2[2]=='O')
	o++;
	if(s[0]=='X'&&s1[0]=='X'&&s2[0]=='X')
	x++;
	if(s[1]=='X'&&s1[1]=='X'&&s2[1]=='X')
	x++;
	if(s[2]=='X'&&s1[2]=='X'&&s2[2]=='X')
	x++;
	if(s[0]=='X'&&s1[1]=='X'&&s2[2]=='X')
	x++;
	if(s[0]=='O'&&s1[1]=='O'&&s2[2]=='O')
	o++;
	if(s[2]=='X'&&s1[1]=='X'&&s2[0]=='X')
	x++;
	if(s[2]=='O'&&s1[1]=='O'&&s2[0]=='O')
	o++;
	if(s[0]=='X'&&s[1]=='X'&&s[2]=='X')
	x++;
	if(s1[0]=='X'&&s1[1]=='X'&&s1[2]=='X')
	x++;
	if(s2[0]=='X'&&s2[1]=='X'&&s2[2]=='X')
	x++;
	if(s[0]=='O'&&s[1]=='O'&&s[2]=='O')
	o++;
	if(s1[0]=='O'&&s1[1]=='O'&&s1[2]=='O')
	o++;
	if(s2[0]=='O'&&s2[1]=='O'&&s2[2]=='O')
	o++;
	if((o>0&&x>0)||(cx-co)>1||(cx-co)<0)
	{
	    cout<<"3"<<endl;
	    return;
	}
	if(cd==9)
	{
	    cout<<"2"<<endl;
	    return;
	}
	if(o==0&&x==0&&cd>0)
	{
	    cout<<"2"<<endl;
	    return;
	}
	if(x>0&&o==0&&cx>co)
	{
	    cout<<"1"<<endl;
	    return;
	}
	if(x==0&&o>0&&cx==co)
	{
	    cout<<"1"<<endl;
	    return;
	}
	if(o==0&&x==0&&cd==0)
	{
	    cout<<"1"<<endl;
	    return;
	}

	cout<<"3"<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
	cin>>t;
	while(t--)
	solve();
	return 0;}