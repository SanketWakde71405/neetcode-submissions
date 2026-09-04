class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                  mp[grid[i][j]]++;
            }
        }

        vector<int> v;

        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second==2){
                v.push_back(it->first);
            }
        }

        int gr=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]>gr){
                    gr=grid[i][j];
                }
            }
        }

       for(int i=1;i<=gr;i++){
          if(mp[i]==0) v.push_back(i);
       }

       if(v.size()!=2) v.push_back(gr+1);

       return v;



    }
};