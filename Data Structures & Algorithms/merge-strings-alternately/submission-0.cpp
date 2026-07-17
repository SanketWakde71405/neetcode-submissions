class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        for(int i=0;i<word1.length();i++){
             s+=word1[i];
             if(i<word2.length()) s+=word2[i];
        }

        if(word2.length()>word1.length()){
            s+=word2.substr(word1.length(),word2.length()-word1.length());
        }

        return s;


    }
};