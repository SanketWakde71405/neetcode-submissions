class Solution {
public:
    int strStr(string haystack, string needle) {
       
       string str="";
       for(int i=0;i<haystack.length()-needle.length()+1;i++){
           str=haystack.substr(i,needle.length());
           if(str==needle) return i;
       }

        
      
        return -1;
        
    }
};