class Solution {
public:
    int search(vector<int>& nums, int target) {
        int divider=0;
        int low=0;
        int high=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                divider=i+1;
                break;
            }
        }

        if(divider!=0){
            if(target<nums[0]){
                 low=divider;
                 high=nums.size()-1;   
            }else{
                low=0;
                high=divider-1;
            }
        }

        int mid=0;
        while(low<=high){
            mid=(low+high)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }

        return -1;
    }
};
