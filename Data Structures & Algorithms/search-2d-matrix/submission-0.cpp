class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
         vector<int> sortedMat;

         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                sortedMat.push_back(matrix[i][j]);
            }
         }

         auto it = find(sortedMat.begin(),sortedMat.end(),target);

         if(it!=sortedMat.end()) return true;

         return false;
    }
};
