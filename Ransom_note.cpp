#include <string>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length() > magazine.length())
            return false;
        if(ransomNote.length() == 0)
            return true;
        for(int x = 0; x < ransomNote.length(); x++) {
            char c = ransomNote[x];
            size_t pos = magazine.find(c,0);
            //cout << c << " " << magazine << "\n";
            if(pos == string::npos) {
                return false;
            }
            else {
                //cout << pos << "\n";
                magazine = magazine.substr(0, pos) + magazine.substr(pos+1);
            }
        }
        return true;
    }
};
