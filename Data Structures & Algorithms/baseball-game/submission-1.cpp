class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int a=0;
        int b=0;
        int c=0;

        for(int i=0;i<operations.size();i++){

              if(operations[i]!="+" && operations[i]!="D" && operations[i]!="C"){
                st.push(stoi(operations[i]));
              }

              if(operations[i]=="+"){
                 b=st.top();
                 st.pop();
                 c=st.top();
                 st.push(b);
                 st.push(b+c);


              }
              if(operations[i]=="D"){
                 a=2*st.top();
                 st.push(a);
                 a=0;
              }
              if(operations[i]=="C"){
                st.pop();
              }
        }
        
        int sum=0;

        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }

      return sum;
    }

    
};