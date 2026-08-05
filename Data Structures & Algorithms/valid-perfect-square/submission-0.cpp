class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1) return true;

        int c=1;

        int sq=1;

        while(sq<num){
            sq=c*c;
            if(sq==num) return true;
            c++;
        }

        return false;



        
    }
};