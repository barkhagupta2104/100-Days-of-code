class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string result;
        int start = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else if (s[i] == ')') {
                st.pop();
            }
            if (st.empty()) {
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
        return result;
    }
};
