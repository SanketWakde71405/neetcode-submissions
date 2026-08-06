class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
        string r="";
        for(int i=0;i<t.length() && j<s.length();i++){
           
           if(t[i]==s[j]){
              r+=s[j];
              j++;
           }
        }
        if(r==s) return true;

        return false;

    }
};