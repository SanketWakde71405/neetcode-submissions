class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      vector<int> v;
      int i=0;

      sort(nums.begin(),nums.end());
      
      while(i<nums.size()-1){
          if(nums[i]-nums[i+1]!=0){
            v.push_back(nums[i]);
            i++;
          }else{
            i+=2;
          }
      }

      if(v.size()!=2){
          v.push_back(nums[nums.size()-1]);
      }

      return v;

        
    }
};