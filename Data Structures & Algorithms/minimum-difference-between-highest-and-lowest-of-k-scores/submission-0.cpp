class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int i=0;
       int j=k-1;
       int minE=INT_MAX;
       int maxE=0;
       int minD=INT_MAX;

       while(j<nums.size()){
            minE=INT_MAX;
            maxE=0;
            for(int m=i;m<=j;m++){
               if(nums[m]<minE){
                minE=nums[m];
               }
               if(nums[m]>maxE){
                maxE=nums[m];
               }
            }
            if(maxE-minE<minD){
                minD=maxE-minE;
            }

            
            i++;
            j++;
       }

       return minD;

    }
};