class Solution {
public:
    bool isPowerOfFour(int n) {

         long long int p=1;

         while(p<n){
            p*=4;
         }

         if(p==n) return true;

         return false;

       

    }
};
