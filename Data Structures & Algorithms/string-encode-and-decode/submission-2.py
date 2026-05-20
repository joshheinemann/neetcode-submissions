class Solution:

    def encode(self, strs: List[str]) -> str:
        #for encode, we will use this notation : 4#Word5#Word2
        #where each word is prefixed by its length and then a # sign
        res = ""
        for s in strs:
            res += str(len(s)) + "#" + s
        return res

    def decode(self, s: str) -> List[str]:
        #loop through the whole list, stop when we find a # sign
        #go back 1 and push the length of the string denoted previously
        ans = []
        i = 0
        while i < len(s):
            j = i #two pointers, using j to determine the size of string (i:j to int)
            while s[j] != "#": #all of the characters leading up to a # sign is the size of the word
                j+=1
            length = int(s[i:j]) # string should now be str[j +1 : length]
            ans.append(s[j + 1 : j + 1 + length])
            i = (j + 1 + length)
        return ans