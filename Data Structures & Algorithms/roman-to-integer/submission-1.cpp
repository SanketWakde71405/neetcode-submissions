class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int r=0;
        for(int i=0;i<s.length();i++){
           if(i<s.length()-1 && s[i]=='I' && s[i+1]=='V'){
                 r+=4;
                 i++;
                 continue;
           }
           else if(i<s.length()-1 && s[i]=='I' && s[i+1]=='X'){
                 r+=9;
                 i++;
                 continue;
           }
           else if(i<s.length()-1 && s[i]=='X' && s[i+1]=='L'){
                r+=40; 
                i++;
                continue;
           }
            else if(i<s.length()-1 && s[i]=='X' && s[i+1]=='C'){
                r+=90;
                i++;
                continue;
           }
           else if(i<s.length()-1 && s[i]=='C' && s[i+1]=='D'){
                r+=400;
                i++;
                continue;
           }else if(i<s.length()-1 && s[i]=='C' && s[i+1]=='M'){
                r+=900;
                i++;
                continue;
           }else{
               r+=mp[s[i]];
               continue;
           }

           
           
        }


        return r;
      
        
    }
};