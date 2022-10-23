#include <iostream>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {0}, m2[256] = {0};
        for (int i = 0; i < s.size(); i++){
            if (m1[s[i]] != m2[t[i]]){
                return false;
            }
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};

int main(){
    string s = "egg", t = "add";
    
    Solution sol;
    bool ans = sol.isIsomorphic(s, t);
    cout << ans;
    return 0;
}
