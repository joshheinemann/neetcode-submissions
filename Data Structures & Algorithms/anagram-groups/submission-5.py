from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        #key idea: if two strings are anagrams, they will have the same sorted string
        #so we will map sorted strings to a vector containing their original strings
        grouped = defaultdict(list)
        ans = []
        for s in strs:
            sorteds = ''.join(sorted(s))
            grouped[sorteds].append(s)
        
        return list(grouped.values())
        
        
        