class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        
        int len=0;
        unsigned long long int num=0;
        for(int i=0;i<abbr.length();i++){
            if(abbr[i]>='a' && abbr[i]<='z'){
               len++;  
               if(num!=0){
                  if((num+len-1)> word.length() || abbr[i]!=word[num+len-1]) return false;
                  len+=num;
                  num=0;
               }
            }
            if(abbr[i]>='0' && abbr[i]<='9'){
                if(abbr[i]=='0' && num==0) return false;
                num=num*10+ (abbr[i]-'0');
            }
        }

        cout << len << " " << word.length() << endl;
        cout << num << endl;

        if(num!=0){
            len+=num;
        }

        if(len==word.length()) return true;

        return false;
        
    }
};