class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int zeroP=-1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
            zeroP=1;
           }
        }

        if(zeroP==-1) return 0;

        int n=nums.size();
        cout << n << endl;
        int actualSum=(n*(n+1))/2;
        int sum=0;

        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
        }

        return actualSum-sum;
        
    }
};
