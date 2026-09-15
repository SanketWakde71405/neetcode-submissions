class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int> mp;

        for(int i=0;i<text.length();i++){
            mp[text[i]]++;
        }

        int count=0;

        if(mp['l']<2 && mp['o']<2) return 0;

        while(mp['b']>0 && mp['a']>0 &&
              mp['l']>0 && mp['o']>0 && 
              mp['n']>0){
                count++;
                mp['b']--;
                mp['a']--;
                mp['l']-=2;
                mp['o']-=2;
                mp['n']--;
                if(mp['l']<2 || mp['o']<2 || mp['b']<=0 || mp['a']<=0 || mp['n']<=0){
                       break;
                }
              }

        return count;      
    }
};