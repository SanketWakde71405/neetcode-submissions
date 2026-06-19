class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0; 
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());

        int cons=1;
        int max=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]== nums[i-1]+1){
                cons++;
                if(cons>max){
                    max=cons;
                }
            }else{
                cons=1;
            }
        }

        return max;

    }
};
