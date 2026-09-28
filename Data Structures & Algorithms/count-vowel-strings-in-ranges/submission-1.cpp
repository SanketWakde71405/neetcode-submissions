class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> v;
        int tc=0;
        int l=0;
        int h=0;
        int k=0;

        for(int i=0;i<queries.size();i++){
             l=queries[i][0];
             h=queries[i][1];
             tc=0;
             for(int j=l;j<=h;j++){
               k=words[j].length()-1; 
               if((words[j][0]=='a' || words[j][0]=='e' || 
                  words[j][0]=='i' || words[j][0]=='o' ||
                  words[j][0]=='u') && (words[j][k]=='a' ||
                  words[j][k]=='e' || words[j][k]=='i' ||
                  words[j][k]=='o' || words[j][k]=='u')){
                    tc++;
                  }
             }
              v.push_back(tc);
        }

        return v;
    }
};