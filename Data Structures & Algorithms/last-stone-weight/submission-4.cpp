class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        if(stones.size()<2) return stones[0];

        int n=stones.size();

        while(stones.size()>=2){
             sort(stones.begin(),stones.end());
             if(stones[stones.size()-1]>stones[stones.size()-2]){
                stones[stones.size()-2]=stones[stones.size()-1]-stones[stones.size()-2];
                if(!stones.empty()) stones.pop_back();
             }
             else if(stones[stones.size()-1]==stones[stones.size()-2]){
                 if(!stones.empty()) stones.pop_back();
                 if(!stones.empty()) stones.pop_back();
             }
        
        } 


        if(stones.size()==2) return abs(stones[0]-stones[1]);
        if(stones.size()==0) return 0;
        return stones[0];
    }
};
