class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int,int> p;

        p.first=0;
        p.second=0;


        map<pair<int,int>,int> mp;

        mp[p]++;

        for(int i=0;i<path.length();i++){

            if(path[i]=='N'){
                p.second++;
                if(mp[p]) return true;
                mp[p]++;
            }else if(path[i]=='S'){
                p.second--;
                if(mp[p]) return true;
                mp[p]++;
            }else if(path[i]=='E'){
                p.first++;
                if(mp[p]) return true;
                mp[p]++;
            }else if(path[i]=='W'){
                p.first--;
                if(mp[p]) return true;
                mp[p]++;
            }
        }

        return false;

        
    }
};