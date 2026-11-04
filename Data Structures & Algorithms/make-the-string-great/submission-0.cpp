class Solution {
public:
    string makeGood(string s) {
        if(s=="") return s;
        stack<char> st;
        st.push(s[0]);

        for(int i=1;i<s.length();i++){

            if(!st.empty() && (s[i]==st.top()+32 || s[i]==st.top()-32)){
                 st.pop();
            }else{
                st.push(s[i]);
            }
        }

        s="";

        while(!st.empty()){
            s+=st.top();
            st.pop();
        }

        reverse(s.begin(),s.end());

        return s;

    }
};
