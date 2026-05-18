#include <iostream>
#include <string>

class Solution {
private:
    int start = 0;
    int maxLength = 1;

    void expand(std::string s, int left, int right){
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            --left;
            ++right;
        }

        int length = right - left - 1;
        if (length > maxLength) {
            maxLength = length;
            start = left + 1;
        }
    }

public:
    std::string longestPalindrome(std::string s) {

        for(int i = 0; i < s.length(); ++i){
            expand(s, i, i+1);
            expand(s, i, i);
        }

        return s.substr(start, maxLength);
    }
};

int main(){
    Solution solution;
    std::string res = solution.longestPalindrome("racecar");
    std::cout << res << std::endl;
}