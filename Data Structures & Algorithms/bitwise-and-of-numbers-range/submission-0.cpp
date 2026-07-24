class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int num=left;
        unsigned long long int res=left;
        while(num!=right){
            res&=num;
            num++;
        }

        res&=num;

        return res;
    }
};