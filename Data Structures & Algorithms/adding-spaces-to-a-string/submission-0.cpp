class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
         
         int sp=0;
         
         for(int i=0;i<spaces.size();i++){
             s.insert(spaces[i]+sp,1,' ');
             sp++;
         }

         return s;

          
    }
};
