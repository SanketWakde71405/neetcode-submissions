class Solution {
public:
    string reverseWords(string s) {

        int st=0;
        int i=0;

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                reverse(s.begin()+st,s.end()-(s.length()-i));
                st=i+1;
            }
        }

        reverse(s.begin()+st,s.end());

        return s;

    }
};
