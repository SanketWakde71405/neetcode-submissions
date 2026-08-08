class Solution {
public:
    int arrangeCoins(int n) {

        if(n==1) return 1;

        unsigned long long int sum=0;
        unsigned long long int i=1;
        unsigned long long int count=0;
        while(sum<n){
            sum+=i;
            i++;
            count++;
        }

        return count-1;

        

        
    }
};