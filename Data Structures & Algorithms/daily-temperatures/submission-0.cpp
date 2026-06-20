class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> dT;

        for(int j=0;j<temperatures.size();j++){
            for(int i=j+1;i<temperatures.size();i++){
                if(temperatures[i]>temperatures[j]){
                    dT.push_back(i-j);
                    break;
                }
                if(i==temperatures.size()-1){
                    dT.push_back(0);
                }
                
            }
        }
        dT.push_back(0);
        return dT;
    }
};
