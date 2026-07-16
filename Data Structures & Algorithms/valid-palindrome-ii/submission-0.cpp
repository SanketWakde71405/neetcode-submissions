class Solution {
public:
    bool validPalindrome(string s) {
        string str=s;
        string res="";
        string rev="";
        reverse(str.begin(),str.end());

        if(str==s) return true;

        str=s;

        for(int i=0;i<s.length();i++){
            res=s;
            res.erase(res.begin()+i);
            rev=res;

            reverse(rev.begin(),rev.end());
            if(rev==res) return true;
        }

        return false;
    }
};