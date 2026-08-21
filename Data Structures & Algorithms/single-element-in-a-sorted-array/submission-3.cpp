class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        if(nums.size()==1) return nums[0];

        int low=1;
        int high=nums.size()-2;

        if(nums[0]!=nums[1]) return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];

        while(low<=high){
            if(nums[low]!=nums[low-1] && nums[low]!=nums[low+1]) return nums[low];
            if(nums[high]!=nums[high-1] && nums[high]!=nums[high+1]){
                  return nums[high];
            } 

            low++;
            high--;

        }

     return -1;

    
        
    }
};