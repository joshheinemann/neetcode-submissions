class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int l = 0;
        int r = heights.size() - 1;

        while(l < r){
            int currA = std::min(heights[l], heights[r]) * (r-l);
            maxA = std::max(currA, maxA);
            if(heights[l] < heights[r]) l++;
            else r--;
        }

        return maxA;
    }
};
