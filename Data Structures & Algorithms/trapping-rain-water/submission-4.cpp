class Solution {
public:
    int trap(vector<int>& height) {
        //water at certain level = min(L, R) - h[i]
        //where L = curr max height on the left
        //R = curr max height on the right
        vector<int> maxLeft(height.size(), 0);
        vector<int> maxRight(height.size(), 0);
        int ans = 0;

        for(int i = 0; i < height.size(); i++){
            if(i == 0) continue;
            maxLeft[i] = std::max(height[i-1], maxLeft[i-1]);
        }

        for(int i = height.size() - 1; i >= 0; i--){
            if(i == height.size() - 1) continue;
            maxRight[i] = std::max(height[i+1], maxRight[i+1]);
        }

        for(int i = 0; i < height.size(); i++){
            int curr = std::min(maxLeft[i], maxRight[i]) - height[i];
            if(curr <= 0) continue;
            ans += curr;
        }

        return ans;
    }
};
