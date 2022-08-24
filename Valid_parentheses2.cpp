//THIS METHOD USES A STACK AND IS MUCH FASTER

#include <string>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        for(int x = 0; x < s.length(); x++) {
            if(s[x] == '(' || s[x] == '[' || s[x] == '{') {
                stac.push(s[x]);
            }
            else {
                if(!stac.empty()) {
                    char c = stac.top();
                    if((s[x] == ')' && c == '(') || (s[x] == ']' && c == '[') || (s[x] == '}' && c == '{'))
                        stac.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        if(stac.empty())
            return true;
        else
            return false;
    }
};
