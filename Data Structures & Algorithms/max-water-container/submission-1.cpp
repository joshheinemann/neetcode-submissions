class Solution {
public:
    int maxArea(vector<int>& heights) {
       //area equals min of both values times the distance between them
       //min(height[p1], height[p2]) * (p2-p1)

        int p1 = 0;
        int p2 = heights.size()-1;

        int maxwater = 0;
        while(p2 >p1){
            int currwater = (min(heights[p1], heights[p2]) * (p2-p1));
            maxwater = max(maxwater, currwater);
            if(heights[p2] > heights[p1]){
                p1++;
            }
            else if(heights[p1] > heights[p2]){
                p2--;
            }
            else{
                p1++;
            }
       }
       return maxwater;
    }
};
