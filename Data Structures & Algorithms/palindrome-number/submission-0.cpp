class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0) return false;
        if(x==0) return true;
        
        long long int num=x;
        long long int digit=0;
        long long int rev=0;

        while(num!=0){
            digit=num%10;
            rev=rev*10+digit;
            num/=10;
        }

        if(rev==x) return true;

        return false;
    }
};