class Solution {
public:
    void rotate(vector<int>& nums, int k) {

         int key= 0;
         int j=0;

        while(k!=0){

             key= nums[nums.size()-1];
             j=nums.size()-2;

             while(j>=0){
                nums[j+1]=nums[j];
                j--;
             }
             
             nums[0]=key;
             k--;

        }
       
        
    }
};