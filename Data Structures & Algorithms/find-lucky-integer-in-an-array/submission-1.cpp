class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        int lucky=-1;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;

        }

        for(auto it = mp.begin();it!=mp.end();++it){
            if(it->first==it->second && it->first>lucky) lucky=it->first ;
        }

        return lucky;
    }
};