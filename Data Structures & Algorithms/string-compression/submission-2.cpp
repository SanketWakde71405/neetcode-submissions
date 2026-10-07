class Solution {
public:
    int compress(vector<char>& chars) {
       
       map<char,int> mp;
       string s="";

       mp[chars[0]]++;

       for(int i=1;i<chars.size();i++){
             mp[chars[i]]++;
             if(chars[i]!=chars[i-1]){
                 s+=chars[i-1];
                 if(mp[chars[i-1]]>1){
                  s+=to_string(mp[chars[i-1]]);
                 }
                 mp[chars[i-1]]=0;
             }
       }

       s+=chars[chars.size()-1];

       if(mp[chars[chars.size()-1]]>1){      
           s+=to_string(mp[chars[chars.size()-1]]);
       }

       for(int i=0;i<s.length();i++){
          chars[i]=s[i];
       }

       return s.length();



    }
      
};