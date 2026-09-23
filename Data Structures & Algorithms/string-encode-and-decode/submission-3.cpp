class Solution {
public:

    string encode(vector<string>& strs) {

        string s="";
        for(int i=0;i<strs.size();i++){
           s+=to_string(strs[i].length());
           s+="#";
           s+=strs[i];
        }
       return s;
    }

    vector<string> decode(string s) {

       vector<string> v;
       int i=0;
       int len=0;
       while(i<s.length()){
           if(s[i]>='0' && s[i]<='9'){
               len=(len*10)+(s[i]-'0');
           }
           else if(s[i]=='#'){
              v.push_back(s.substr(i+1,len));
              i+=len;
              len=0;
           }
           i++;
       }

       return v;

    }
};
