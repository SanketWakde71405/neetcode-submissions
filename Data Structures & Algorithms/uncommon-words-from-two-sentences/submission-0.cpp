class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        map<string,int> mp;

        string str="";
        for(int i=0;i<s1.length();i++){
             if(s1[i]==' '){
                mp[str]++;
                str="";
             }else{
                str+=s1[i];
             }
        }

        if(str!="") mp[str]++;

        str="";

         for(int i=0;i<s2.length();i++){
             if(s2[i]==' '){
                mp[str]++;
                str="";
             }else{
                str+=s2[i];
             }
        }

        if(str!="") mp[str]++;

        vector<string> v;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second==1){
                v.push_back(it->first);
            }
        }

        return v;



    }
};
