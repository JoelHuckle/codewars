#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        //start with largest width
        //find smallest height pointer and calculate area
        //move smaller pointer inwards and calculate area

        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while(left < right){
            int h = min(height[left], height[right]);
            int width = right-left;
            int area = h*width;

            maxWater = max(maxWater, area);

            if(height[left] < height[right]){
                ++left;
            } else {
                --right;
            }
        }
        
        return maxWater;
    }
};

int main(){
    Solution solution;
    vector<int> ans = {1,8,6,2,5,4,8,3,7};
    int res = solution.maxArea(ans);
    cout << res << endl;
}

