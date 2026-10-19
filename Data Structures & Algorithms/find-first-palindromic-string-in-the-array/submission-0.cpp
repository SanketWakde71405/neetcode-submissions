class Solution {
public:
    string firstPalindrome(vector<string>& words) {
               string s="";
               int j=0;
               for(int i=0;i<words.size();i++){
                   j=words[i].length()-1;
                   s="";
                   while(j>=0){
                     s+=words[i][j];
                     j--;
                   }

                   if(words[i]==s) return words[i];

               }

               return "";
    }
};
