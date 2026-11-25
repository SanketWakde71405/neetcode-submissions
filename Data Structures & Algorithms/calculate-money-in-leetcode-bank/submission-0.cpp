class Solution {
public:
    int totalMoney(int n) {
        
           int s=0;
           int total=0;
           int prev=0;

           for(int i=1;i<=n;i++){
               if(i%7==0){
                total+=prev+1;
                s++;
                continue;
               }
               prev=(i%7)+s;
               total+=prev;
           }

           return total;
    }
};
