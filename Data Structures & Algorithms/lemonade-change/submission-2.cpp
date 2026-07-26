class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        

        unordered_map<int,int> mp;
        
        if(bills[0]!=5) return false;


        for(int i=0;i<bills.size();i++){
          
          if(bills[i]==5){
            mp[5]++;
            continue;
          }

          if(bills[i]==10){
            if(mp[5]==0) return false;
             
            mp[10]++; 
            mp[5]--;
            continue;

          }

          if(bills[i]==20){
             if((mp[10]==0 && mp[5]<3) || (mp[10]>0 && mp[5]==0)){
                return false;
             }
             if(mp[10]>0 && mp[5]>0){
                mp[10]--;
                mp[5]--;
                continue;
             }

             if(mp[10]==0 && mp[5]>=3){
                mp[5]-=3;
                continue;
             }

             
             
          }

        }

        

        return true;
    }
};