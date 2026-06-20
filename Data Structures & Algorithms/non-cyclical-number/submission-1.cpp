class Solution {
public:
    bool isHappy(int n) {
       map<int,int> mp;
       int sqNum=0;
       while(n!=0){
        sqNum+=(n%10)*(n%10);
        n/=10;
        if(n==0){
            if(mp[sqNum]) return false;
            if(sqNum==1) return true;
            mp[sqNum]++;
            n=sqNum;
            sqNum=0;
        }
       }
    }
};
