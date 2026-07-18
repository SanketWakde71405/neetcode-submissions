class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
              if(mp[nums[i]]){
                nums.erase(nums.begin()+i);
                i--;
                }
                else{
                mp[nums[i]]++;
              }
        }

        return nums.size();
    }
};