class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        vector<vector<int>> res(2);
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]++;
        }

        for(int i=0;i<nums1.size();i++){
            if(!mp[nums1[i]]){
                cout << i << endl;
                res[0].push_back(nums1[i]);
            }
        }

        sort(res[0].begin(),res[0].end());
        res[0].erase(unique(res[0].begin(),res[0].end()), res[0].end());

        mp.clear();
        for(int i=0;i<nums1.size();i++){
             mp[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            if(!mp[nums2[i]]){
                res[1].push_back(nums2[i]);
            }
        }
        
        sort(res[1].begin(),res[1].end());
        res[1].erase(unique(res[1].begin(),res[1].end()), res[1].end());


        return res;
    }
};