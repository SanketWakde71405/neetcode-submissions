class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        for(int i=0;i< numbers.size();i++){
            auto j= distance(numbers.begin(),
            find(numbers.begin(),numbers.end(),target-numbers[i])
            );

            if(j<numbers.size()) {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
        }
        return v;
    }
};
