class Solution {
public:
    int appendCharacters(string s, string t) {
        int j=0;

        for(int i=0;i<s.length() && j<t.length();i++){
            if(t[j]==s[i]){
                j++;
            }
        }

        if(j==0) return t.length();
        if(j<=t.length()-1) return t.length()-j;

        return 0;
    }
};