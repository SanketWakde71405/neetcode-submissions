class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {

        int j=0;
        vector<int> v;
        for(int i=heights.size()-1;i>j;i--){
               if(heights[i]>=heights[j]){
                 j++;
                 i=heights.size();
                 continue;
               }

               if(i==j+1){
                   v.push_back(j);
                   j++;
                   i=heights.size();
               }
        }

        v.push_back(heights.size()-1);

        return v;
        
    }
};