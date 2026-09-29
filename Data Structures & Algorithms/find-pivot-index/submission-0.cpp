class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0;
        int rsum=0;

        for(int i=0;i<nums.size();i++){
            rsum+=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            rsum-=nums[i];
            if(i!=0) lsum+=nums[i-1];
            if(lsum==rsum) return i;
        }

        return -1;
    }
};