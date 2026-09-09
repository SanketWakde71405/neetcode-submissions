class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int consistent=0;

        unordered_map<char,int> mp;

        for(int i=0;i<allowed.length();i++){
            mp[allowed[i]]++;
        }


        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(!mp[words[i][j]]) break;

                if(j==words[i].length()-1) consistent++;
            }
        }

        return consistent;
        
    }
};