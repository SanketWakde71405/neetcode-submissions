class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int c=0;
       c = count(nums.begin(),nums.end(),0);
       if(c>1){
          for(int i=0;i<nums.size();i++){
            nums[i]=0;
          }
          return nums;
       } 
       long long int p=1;
       
       for(int i=0;i<nums.size();i++){
          p*=nums[i];
       }

       if(p!=0){
        for(int i=0;i<nums.size();i++){
            nums[i]=p/nums[i];
        }
       }
       else{
         long long int p_zero=1;

       for(int i=0;i<nums.size();i++){
        if(nums[i]==0) continue;
        p_zero*=nums[i];
       }

       for(int i=0;i<nums.size();i++){
         if(nums[i]==0){
           nums[i]=p_zero;
           continue;
         } 
         nums[i]=0;
       }
        
       }
      

      return nums;
    }
};
