class Solution {
public:
    int tribonacci(int n) {
        unsigned long long int t_zero=0;
        unsigned long long int t_one=1;
        unsigned long long int t_two=1;

        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        

        unsigned long long int t_n=0;

        for(int i=2;i<n;i++){
            t_n=t_zero+t_one+t_two;
            t_zero=t_one;
            t_one=t_two;
            t_two=t_n;
        }

        return t_n;
    }
};