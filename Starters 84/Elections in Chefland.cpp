//https://www.codechef.com/problems/ELECTN
//Elections in Chefland

class Solution {
public:
    string simplifyPath(string path) {
        string curr,simpath;
        stack<string> st;
        path.push_back('/');
        for(char c:path) {
            if(c=='/') {
                if(curr.empty()) continue;
                else if(curr=="..") {
                    if(!st.empty()) st.pop(); 
                }
                else if(curr!=".") st.push(curr);  
                curr="";
            }
            else
                curr.push_back(c);
        }
        
        while(!st.empty()) {
            simpath="/"+st.top()+simpath;
            st.pop();
        }
        return simpath.empty()?"/":simpath;
    }
};