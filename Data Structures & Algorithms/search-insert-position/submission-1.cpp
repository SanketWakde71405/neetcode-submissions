class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size()-1;
        int mid=0;

        if(target>nums[high]) return nums.size();
        if(target<nums[0]) return 0;

        while(low<=high){
             mid=(low+high)/2;

             if(nums[mid]==target){
                return mid;
             }
             else if(nums[mid]>target){
                high=mid-1;
                continue;
             }else if(nums[mid]<target){
                low=mid+1;
                continue;
             }
        }

        if(low==high){
           if(nums[low]<target){
              while(nums[low]<target && low<nums.size()){
                  low++;
              }

              return low;
           }
           while(nums[low]>target && low>=0){
             low--;
           }

           return low+1;
        }

        if(nums[high]>target){
            while(nums[high]>target && high>=0){
               high--;
            }

            return high+1;
        }else if(nums[high]<target){
           if(nums[low]>target){
               
               while(nums[high]<target && high!=low){
                  high++;
               }

               return high;

           }
        }else if(nums[low]<target){
            
            while(nums[low]<target && low<nums.size()){
               low++;
            }

            return low;

        }

        return -1;

      



    }
};