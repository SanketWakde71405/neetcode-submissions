class Solution {
public:
    int hammingWeight(uint32_t n) {

        int m=0;
        while (n > 0) {
            if(n&1==1) m++;
             n >>= 1;                 // remove the last bit
        }

        return m;

    }
};
