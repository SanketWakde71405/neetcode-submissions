class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
       stack<int> st;
       int a=0,b=0;

       for(int i=0;i<tokens.size();i++){
           if(tokens[i]!="+" && tokens[i]!="-" && 
              tokens[i]!="/" && tokens[i]!="*"){
                st.push(stoi(tokens[i]));
              }

           else if(tokens[i]=="+"){
              if(!st.empty()){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(a+b);
              }
           } 

           else if(tokens[i]=="-"){
              if(!st.empty()){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b-a);
              }
           } 

           else if(tokens[i]=="*"){
              if(!st.empty()){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(a*b);
              }
           } 
           else if(tokens[i]=="/"){
              if(!st.empty()){
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                st.push(b/a);
              }
           }     
       }

      return st.top();
       

    }
};
