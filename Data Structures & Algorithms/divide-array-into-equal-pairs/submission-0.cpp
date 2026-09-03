class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it= mp.begin();it!=mp.end();++it){
            if(it->second%2!=0) return false;
        }

        return true;
    }
};