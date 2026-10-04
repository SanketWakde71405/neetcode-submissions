class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        bool isSortedAsc=false;
        bool isSortedDesc=false;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>=nums[i-1]){
                isSortedAsc=true;
            }else{
                isSortedAsc=false;
                break;
            }
        }

        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                isSortedDesc=true;
            }else{
                isSortedDesc=false;
                break;
            }
        }

        if(!isSortedAsc && !isSortedDesc) return false;


        return true;

    }
};