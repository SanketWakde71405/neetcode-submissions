class Solution {
public:
    string customSortString(string order, string s) {
        
        string str="";
        map<char,int> mp;

        char search='a';
        int j=0;
        while(j<order.length()){
             search=order[j];
              
             for(int i=0;i<s.length();i++){
                if(s[i]==search){
                    str+=s[i];
                    mp[s[i]]++;
                }
             } 
             j++;

        }
        

        for(int i=0;i<s.length();i++){
            if(!mp[s[i]]) str+=s[i];
        }


        return str;
    }
};