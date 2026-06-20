class Solution {
public:
    double myPow(double x, int n) {
       if(n==0) return (double) 1;
       double z=x;
       int p=0;
       if(n>0){
        while(n!=1){
         x*=z;
         n--;
         }
       }
       else{
         p=-1*n;
         while(p!=1){
         x*=z;
         p--;
         }
         x=1/x;
       }
      

       return x;
    }
};
