class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        string firstword = strs[0];
        if(firstword.length() == 0)
            return pre;
        for(int x = 0; x < firstword.length(); x++) {
            char a = firstword[x];
            bool add = true;
            for(int y = 1; y < strs.size(); y++) {
                if(strs[y][x] != a)
                    add = false;
            }
            if(add == true)
                pre = pre + a;
            else
                break;
        }
        return pre;
    }
};
