class Solution {
public:
    int countOdds(int low, int high) {
        if(high==low && high%2!=0) return 1;
        if(high==low && high%2==0) return 0;
        return ((high-low)/2)+1;
    }
};