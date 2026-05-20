class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #create hash map for both, mapping each char to count
        #loop through, check if the count for each char is equal
        smap = {}
        tmap = {}

        for c in s:
            if c in smap:
                smap[c] += 1
            else:
                smap[c] = 1
        
        for c in t:
            if c in tmap:
                tmap[c] += 1
            else:
                tmap[c] = 1
        
        return smap == tmap
        