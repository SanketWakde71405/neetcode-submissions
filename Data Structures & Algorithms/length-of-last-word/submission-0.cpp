class Solution {
public:
    int lengthOfLastWord(string s) {
        
         const string whitespace = " \t\n\v\f\r";

          // Trim trailing whitespace first (prevents index shifts)
          const auto end = s.find_last_not_of(whitespace);
          if (end != string::npos) {
              s.erase(end + 1);
           } else {
              s.clear(); // String is entirely whitespace
           }

        // Trim leading whitespace
        const auto start = s.find_first_not_of(whitespace);
         if (start != string::npos) {
              s.erase(0, start);
         }

        string lastWord="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ') break;
            else{
                lastWord+=s[i];
            }
        }

        return lastWord.length();
    }
};