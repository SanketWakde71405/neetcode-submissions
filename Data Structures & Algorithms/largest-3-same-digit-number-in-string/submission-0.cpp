class Solution {
public:
    string largestGoodInteger(string num) {
        int n=-1;
        int c=0;
        for(int i=0;i<num.length()-2;i++){
           if(num[i]==num[i+1] && num[i]==num[i+2]){
             c=111*(num[i]-'0');
             if(c>n){
                n=c;
                c=0;
             }  
           }
        }

        if(n==-1) return "";

        string s="";
        s+=(n%10)+'0';
        s+=(n%10)+'0';
        s+=(n%10)+'0';

        return s;
        
    }
};