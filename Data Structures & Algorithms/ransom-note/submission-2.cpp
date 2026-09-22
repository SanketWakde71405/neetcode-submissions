class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> rp;
        map<char,int> mp;

        for(int i=0;i<magazine.length();i++){
            mp[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.length();i++){
            rp[ransomNote[i]]++;
        }

        for(int i=0;i<ransomNote.length();i++){
            if(mp[ransomNote[i]]<rp[ransomNote[i]]) return false;
        }
        return true;
    }
};