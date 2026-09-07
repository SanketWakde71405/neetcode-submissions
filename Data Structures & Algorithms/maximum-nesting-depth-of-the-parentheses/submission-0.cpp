class Solution {
public:
    int maxDepth(string s) {
        
        int level=0;
        int maxLevel=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                level++;
                if(level>maxLevel){
                    maxLevel=level;
                }
            }
            if(s[i]==')'){
                level--;
            }
        }

        return maxLevel;

    }
};