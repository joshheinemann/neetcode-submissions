class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        // if(s.size() != t.size()){
        //     return false;
        // }
        for(char c : s){
            smap[c]++;
        }
        for(char c : t){
            tmap[c]++;
        }
        return (smap == tmap);
    }
};
