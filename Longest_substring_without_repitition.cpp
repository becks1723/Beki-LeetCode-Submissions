#include<string.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest_string = 0;
        int counter = 0;
        string word = "";
        for(int x = 0; x < s.length(); x++) {
            word = word + s[x];
            counter++;
            int rep = repeated(word, s[x]);
            if(rep != -1){
                word = word.substr(rep+1);
                counter = word.length();
            }
            if(counter > longest_string)
                longest_string = counter;
        }
        return longest_string;
    }
    
    int repeated(string word, char c) {
        for(int x = 0; x < word.length()-1; x++) {
            if(word[x] == c)
                return x;
        }
        return -1;
    }
};
