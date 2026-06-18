class Solution {
public:
    bool isValid(string s) {

      stack<char> brackets;

      for(int i=0; i< s.length();i++){
        
        if(!brackets.empty() && ((s[i]==')' && brackets.top() == '(') ||
           (s[i]==']' && brackets.top() == '[') ||
           (s[i]=='}' && brackets.top() == '{'))){

            brackets.pop();
            continue;
           }

        brackets.push(s[i]); 

      }

      if(brackets.empty()) return true;

      return false;
        
    }
};
