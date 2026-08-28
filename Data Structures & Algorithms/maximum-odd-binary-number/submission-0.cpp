class Solution {
public:
    string maximumOddBinaryNumber(string s) {
         sort(s.begin(),s.end());

         reverse(s.begin(),s.end());
         cout << s << endl;
         int count=0;
         for(int i=0;i<s.length();i++){
             if(s[i]=='1') count++;
         }

         if(count==1){
            for(int i=0;i<s.length();i++){
                if(s[i]=='1'){
                    s[i]='0';
                    s[s.length()-1]='1';
                    break;
                }
            }
         }

         if(s[s.length()-1]!='1') s[s.length()-1]='1';

         count--;

         for(int i=0;i<s.length()-1;i++){
            if(count>0 && s[i]=='1'){
                 count--;
            }else if(count<=0 && s[i]=='1'){
                s[i]='0';
            }
         }

         return s;



    }
};