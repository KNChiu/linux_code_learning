#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:    
    bool isValid(string s) {
        stack<char> st;
        
        for (char c: s) {            
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else if (st.empty()) {
                return false;
            }            
            else if (st.top() == '(' && c != ')') return false;
            else if (st.top() == '{' && c != '}') return false;
            else if (st.top() == '[' && c != ']') return false;
            
            // Pop
            else st.pop();
        }
        
        return (st.empty());
    }
};

int main() {
    string s = "{[]";
    Solution sol;
    bool ans = sol.isValid(s);

    out << ans << " ";
    
    return 0;
}

