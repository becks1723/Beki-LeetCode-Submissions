#include <string>

class Solution {
public:
    string checkParenthesis(string s) {
        
        int parenthesis = s.find("()");
        if(parenthesis == string::npos) {
            parenthesis = s.find("{}");
            if(parenthesis == string::npos) {
                parenthesis = s.find("[]");
            }
        }
        
        while(parenthesis != string::npos) {
            s = s.substr(0,parenthesis) + s.substr(parenthesis+2);
            parenthesis = s.find("()");
            if(parenthesis == string::npos) {
                parenthesis = s.find("{}");
                if(parenthesis == string::npos) {
                    parenthesis = s.find("[]");
                }
            }
        }
        return s;
    }
    
    bool isValid(string s) {
        if(s.length()==1)
            return false;
        if(s.length()%2 != 0)
            return false;
        if(checkParenthesis(s) == "")
            return true;
        return false;
    }
};
