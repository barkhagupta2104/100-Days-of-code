class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](auto& p1, auto& p2) {
            return p1.second > p2.second;
        });
        
        string sortedString = "";
        for (auto& p : freqVec) {
            sortedString += string(p.second, p.first);
        }
        
        return sortedString;
    }
};
