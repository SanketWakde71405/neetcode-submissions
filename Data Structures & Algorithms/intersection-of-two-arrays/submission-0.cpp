class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v;
       int key=0;
       int j=0;
       for(int i=0;i<nums1.size();i++){
          key=nums1[i];
          j=0;
          while(j<nums2.size()){
            if(nums2[j]==key){
                v.push_back(key);
                break;
            }
            j++;
          }
       } 

       sort(v.begin(),v.end());

       v.erase(unique(v.begin(), v.end()),v.end());
       
       return v;
    }
};