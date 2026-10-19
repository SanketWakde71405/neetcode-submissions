class Solution {
public:
    vector<vector<int>> generate(int numRows) {

       vector<vector<int>> v(numRows);
       int element;
        for (int i = 0; i < numRows; i++) {
            element = 1;

            for (int j = 0; j <= i; j++) {
                v[i].push_back(element);
                element = element * (i - j) / (j + 1);
            }
        }

        return v;
        
    }
};