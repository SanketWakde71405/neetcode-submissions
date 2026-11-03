class Solution {
public:
    bool backspaceCompare(string s, string t) {
          
         stack<char> st;


         for(int i=0;i<s.length();i++){
               if(s[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }else{
                    continue;
                }
               }
               else{
                st.push(s[i]);
               }
         }

         string str="";

         while(!st.empty()){
            str+=st.top();
            st.pop();
         }

         for(int i=0;i<t.length();i++){
               if(t[i]=='#'){
                if(!st.empty()) st.pop();
                else continue;
               }
               else{
                st.push(t[i]);
               }
         }
          
         string tr=""; 
         
         while(!st.empty()){
            tr+=st.top();
            st.pop();
         }

         cout << tr << endl;
         cout << str << endl;

         return tr==str;
         









    }
};
