class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> v;

        sort(p.begin(),p.end());

        string str="";

        if(p.length()>s.length()) return v;

        for(int i=0;i<s.length()-p.length()+1;i++){
             str=s.substr(i,p.length());
             sort(str.begin(),str.end());

             if(str==p) v.push_back(i);
        }

        return v;

    }
};
