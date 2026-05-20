class Solution {
public:
    bool checkAnagram(std::string s1, std::string s2){
        if(s1.size() != s2.size()) return false;
        std::unordered_map<char, int> s1Set;
        for(char c : s1){
          s1Set[c]++;  
        }
        for(char c : s2){
            s1Set[c]--;
        }
        for(auto pair : s1Set){
            if (pair.second != 0){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //we should have a set of ints to represent if each index in the original vector has already been added
        std::set<int> processed;
        std::vector<std::vector<std::string>> ans;
        for(int i = 0; i < strs.size(); i++){
            if (processed.count(i)) continue;
            processed.insert(i);
            std::vector<std::string> curr;
            curr.push_back(strs[i]);
            for(int j = 0; j < strs.size(); j++){
                if (processed.count(j)) continue;
                if(checkAnagram(strs[i], strs[j])){
                    curr.push_back(strs[j]);
                    processed.insert(j);
                }
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
