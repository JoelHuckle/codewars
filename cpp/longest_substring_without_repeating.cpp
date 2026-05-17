#include <unordered_set>
#include <string>
#include <iostream>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        
        int left = 0;
        int right = 0;

        int max_length = 0;

        std::unordered_set<char> seen;

        for(right = 0; right < s.length(); ++right){               
            while(seen.count(s[right]) > 0){
                seen.erase(s[left]);
                ++left;
            }
            
            max_length = std::max(max_length, right - left + 1);


            seen.insert(s[right]);
        }

        return max_length;
    }
};

int main(){
    Solution solution;
    std::string s = "pwwkew";
    int res = solution.lengthOfLongestSubstring(s);
    std::cout << res << std::endl;
}