1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5
6        for(char ch:s){
7            if(ch=='(' ||ch=='{'|| ch=='['){
8                st.push(ch);
9            }else{
10                if(st.empty()){
11                    return false;
12                }
13            
14
15            if(ch==')'&&st.top()!='('){
16                return false;
17            }
18
19             if(ch=='}'&&st.top()!='{'){
20                return false;
21            }
22
23             if(ch==']'&&st.top()!='['){
24                return false;
25            }
26            st.pop();
27            }
28        }
29        return st.empty();
30        
31    }
32};