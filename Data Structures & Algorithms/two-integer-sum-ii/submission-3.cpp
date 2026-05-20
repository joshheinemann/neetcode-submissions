class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1 = 0;
        int p2 = numbers.size() - 1;

        while(true){
            if(numbers[p1] + numbers[p2] == target) return {++p1, ++p2};
            else if (numbers[p1] + numbers[p2] > target) p2--;
            else p1++;
        }

        return {};
    }
};
