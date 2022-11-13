class Solution {
public:
    bool isPalindrome(string s) {
        for (int i=0, j=s.size()-1; i < j; i++, j--){
            int n = s.size();
            if (n == 1) return true;

            while(isalnum(s[i]) == false && i < j)
                i++;

            while(isalnum(s[j]) == false && i < j)
                j--;

            if (toupper(s[i]) != toupper(s[j]))
                return false;
        }
        return true;
    }
};
