class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int ab= nums[nums.size()-1]*nums[nums.size()-2];
        int cd= nums[0]*nums[1];

        return ab-cd;
    }
};