class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.empty()) return t.empty();

        int sset[30] = {0}, tset[30] = {0};

        for (const char &c : s) ++sset[c-'a'];
        for (const char &c : t) ++tset[c-'a'];

        for (int i = 0; i < 30; i++)
            if (sset[i] != tset[i]) return false;
        return true;
    }
};
