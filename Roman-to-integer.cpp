class Solution {
public:
    int romanToInt(string s) {
        map roman = createMap();
        int total = 0;
        for(int x = 0; x < s.length(); x++) {
            bool sub = false;
            map<char,int>::iterator it = roman.find(s[x]);
            int value = it->second;
            if(x != s.length()-1) {
            map<char,int>::iterator it1 = roman.find(s[x+1]);
            int value1 = it1->second;
                sub = subtract(value, value1);
            }
            if(sub) {

                total = total - value;
                }
            else
                total = total + value;
        }
        return total;
    }
    
    map<char,int> createMap() {
        map<char,int> roman;
        roman.insert(pair<char,int>('I', 1));                     
        roman.insert(pair<char,int>('V', 5));
        roman.insert(pair<char,int>('X', 10));
        roman.insert(pair<char,int>('L', 50));
        roman.insert(pair<char,int>('C', 100));
        roman.insert(pair<char,int>('D', 500));
        roman.insert(pair<char,int>('M', 1000));
        return roman;
    }
    
    bool subtract(int a, int b) {
        if(a < b)
            return true;
        else
            return false;
    }
};
