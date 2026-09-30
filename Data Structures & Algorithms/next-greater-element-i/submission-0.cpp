class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> v;
        int gr=-1;
        int k=0;

        for(int i=0;i<nums1.size();i++){
            gr=-1;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    k=j;
                    break;
                }
            }

            for(int m=k+1;m<nums2.size();m++){
                if(nums2[m]>nums2[k] && nums2[m]>gr){
                    gr=nums2[m];
                    break;
                }
            }

            v.push_back(gr);
        }

        return v;
        
    }
};