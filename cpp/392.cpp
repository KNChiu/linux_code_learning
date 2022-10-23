#include <iostream>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int short_s = 0;
        for (int i = 0;i < t.size() && short_s < s.size();i++){
            if (s[short_s] == t[i]){
                short_s += 1;
            }
        }
        return short_s == s.size();
    }
};



int main(){
    string s = "abc", t = "ahbgdc";
    Solution sol;
    bool ans = sol.isSubsequence(s, t);
    cout << ans;
}
