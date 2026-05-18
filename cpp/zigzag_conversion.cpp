#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        int depth = 0;
        bool down = true;

        if (numRows == 1){return s;}

        std::vector<std::string> letters(numRows); 

        //if going down and depth less than numRows, add to next string down
        //if depth equal, go up, add to next vector up
        //if going up and depth less than 0, add to next vector up
        // if going up and depth equal to 0, go down
        
        for (int i = 0; i < s.length(); ++i){
            letters[depth] += s[i];
            if(down){
                if (depth == numRows-1){
                    depth -= 1;
                    down = false;
                } else {
                    depth += 1;
                }
            }
            else{
                if (depth == 0){
                    depth += 1;
                    down = true;
                } else {
                    depth -= 1;
                }
            }
        }

        std::string res;
        for(std::string s : letters){
            res += s;
        }

        return res;
    }
};

int main(){
    Solution solution;
    std::string res = solution.convert("PAYPALISHIRING", 3);
    std::cout << res << std::endl;
}