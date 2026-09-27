class Solution {
public:
    int maxDifference(string s) {

        map<char,int> mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        int oddfreq=0,evenfreq=INT_MAX;

        for(auto it=mp.begin();it!=mp.end();++it){
            if((it->second)%2==0 && (it->second)<evenfreq){
                evenfreq=it->second;
            }else if((it->second)%2!=0 && (it->second)>oddfreq){
                oddfreq=it->second;
            }
        }

        return oddfreq-evenfreq;
        
    }
};