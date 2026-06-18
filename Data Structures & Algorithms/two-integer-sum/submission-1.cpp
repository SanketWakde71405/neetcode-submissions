class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair;

        for(int i=0;i<nums.size();i++){
            auto it= find(nums.begin()+i+1,nums.end(),target-nums[i]);
            
            if(it!=nums.end()){
                int index= it -nums.begin();
                pair.push_back(i);
                pair.push_back(index);
                return pair;
            }

        }

        

    }
};
