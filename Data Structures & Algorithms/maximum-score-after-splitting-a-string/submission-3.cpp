class Solution {
public:
    int maxScore(string s) {

        unsigned long long int numZero=0;
        unsigned long long int numOne=0;
        unsigned long long int maxD=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                numOne++;
            }
        }

        if(numOne==0) return s.length()-1;

        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0'){
                numZero++;
            }
            else if (s[i]=='1'){
                numOne--;
            }

            if(numZero+numOne>maxD){
                maxD=numZero+numOne;
            }
        }

        return maxD;
        
    }
};