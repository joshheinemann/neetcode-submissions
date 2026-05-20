class Solution {
public:
    bool isPalindrome(string s) {
        //first remove spaces and make the entire string lowercase
        std::string fixed = "";

        for(char c : s){
            if(isalnum(c)){
                fixed += tolower(c);
            }
        }

        int p1 = 0;
        int p2 = fixed.size() - 1;
        while(p2 > p1){
            if(fixed[p1] != fixed[p2]) return false;
            p1++;
            p2--;
        }

        return true;
    }
};
