class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> n;

        int s=0;
        int e=s+(k-1);
        int max=0;

        while(e<nums.size()){
            max=*std::max_element(nums.begin()+s, nums.begin()+e+1);
            n.push_back(max);
            s++;
            e++;
        }

        return n;
    }
};
