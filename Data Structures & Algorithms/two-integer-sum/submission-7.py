class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indicies = {}
        for i in range (len(nums)):
            indicies[nums[i]] = i

        for i in range (len(nums)):
            diff = target - nums[i]
            #check if difference is in indicies, and if indicies[diff] != i
            # then return i, indicies[diff]
            if diff in indicies and indicies[diff] != i:
                return [i, indicies[diff]]
        
        return []
            
        