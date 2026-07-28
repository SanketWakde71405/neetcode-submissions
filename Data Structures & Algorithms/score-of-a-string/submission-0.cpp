class Solution {
public:
    int scoreOfString(string s) {
        int a=0;
        int b=0;
        int score=0;

        for(int i=0;i<s.length()-1;i++){
           a=int(s[i]);
           b=int(s[i+1]);
           score+=abs(a-b);
        }

        return score;
    }
};