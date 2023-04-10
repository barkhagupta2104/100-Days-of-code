class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, char> s_map;
        std::unordered_map<char, char> t_map;

        for (int i = 0; i < s.length(); i++) {
            char s_char = s[i];
            char t_char = t[i];

            auto s_it = s_map.find(s_char);
            auto t_it = t_map.find(t_char);

            if (s_it == s_map.end() && t_it == t_map.end()) {
                s_map[s_char] = t_char;
                t_map[t_char] = s_char;
            } else if (s_it != s_map.end() && t_it != t_map.end()) {
                if (s_it->second != t_char || t_it->second != s_char) {
                    return false;
                }
            } else {
                return false;
            }
        }

        return true;
    }
};
