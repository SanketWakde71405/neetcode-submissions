class Solution {
public:
    int findMin(vector<int> &nums) {
        
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i+1]<nums[i]) return nums[i+1];
        }

        if (nums[nums.size()-1]<nums[0]) return nums[nums.size()-1] ;
        return nums[0];
    }
};
