class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;

        unsigned long long int i=1;
        unsigned long long int sq=0;

        while(sq<=x){
           sq=i*i;
           i++;
        }

        if(sq==x) return i;

        return i-2;
    }
};