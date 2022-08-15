// THIS CODE GIVES TLE

#include <string.h>

class Solution {
public:
    string longestPalindrome(string s) {
        string sol = s.substr(0,1);
        string check = "";
        for(int x = 0; x < s.length(); x++) {
            for(int y = x; y < s.length(); y++) {
                //cout << x << " " << y << "\n";
                check = s.substr(x,y-x+1);
                if(isPalindrome(check)) {
                    if(check.length() > sol.length())
                        sol = check;
                }
            }
        }
        return sol;
    }
    
    bool isPalindrome(string s){
        for(int x = 0; x < s.length()/2; x++) {
            //cout << s << "\n";
            if(s[x] != s[s.length()-1-x])
                return false;
        }
        return true;
    }
};
