class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //we will use the fact that if two strings are anagrams, their sorted string will be the same
        //sort the string, then map the sorted string to a vector containing the original string
        unordered_map<string, vector<string>> groupedAnagrams;
        vector<vector<string>> ans;
        for(string& s : strs){
            string original = s; 
            sort(s.begin(), s.end()); //sort string
            groupedAnagrams[s].push_back(original); //add the original to the vector mapped from sorted string
        }
        for (auto& p : groupedAnagrams){
            ans.push_back(p.second);
        }
        return ans;
    }
};
