class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.length()>s2.length()) return false;

        sort(s1.begin(),s1.end());
        
        int i=0;
        int j=s1.length()-1;
        int m=s1.length();
        string r="";
        while(j<s2.length()){
             r="";
             r=s2.substr(i,s1.length());
             sort(r.begin(),r.end());
             if(r==s1) return true;
             i++;
             j=i+m-1;
        }

        return false;
        
    }
};
