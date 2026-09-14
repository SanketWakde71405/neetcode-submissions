class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int m=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=m){
                continue;
            }else{
                m++;
            }
        }

        return m;
    
        
    }
};