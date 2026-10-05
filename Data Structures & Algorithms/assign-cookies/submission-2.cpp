class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        map<int,int> mp;
        int count=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        for(int i=0;i<g.size();i++){
            if(mp[g[i]]>0){
              cout << g[i] << endl;  
              count++;
              mp[g[i]]--;
            }else{
                for(auto it=mp.begin();it!=mp.end();++it){
                    if(it->first>g[i] && it->second>0){
                        count++;
                        it->second--;
                        break;
                    }
                }
            }
        }

        return count;
    }
};