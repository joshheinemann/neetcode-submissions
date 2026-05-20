class Solution {
public:
    string scraper(string s){
        string returnval;
        for(char c : s){
            if (isalnum(c)){
                returnval += tolower(c);
            }
        }
        return returnval;
    }
    bool isPalindrome(string s) {
        std::string clean = scraper(s);
        int p1 = 0;
        int p2 = clean.length()-1;

        while(p2 > p1){
            if(clean[p1] != clean[p2]){
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};
