class Solution {
public:
int romanToInt(string s) {
    unordered_map<char, int> romans;
    romans['I'] = 1;
    romans['V'] = 5;
    romans['X'] = 10;
    romans['L'] = 50;
    romans['C'] = 100;
    romans['D'] = 500;
    romans['M'] = 1000;

    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        int val = romans[s[i]];
        if (i + 1 < s.length() && val < romans[s[i + 1]])
            result -= val;
        else
            result += val;
    }
    return result;
}

};
