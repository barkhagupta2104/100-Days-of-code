class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
    int maxCandies = n / 2;
    unordered_set<int> uniqueCandies;
    for (int i = 0; i < n && uniqueCandies.size() < maxCandies; i++) {
        uniqueCandies.insert(candyType[i]);
    }
    return uniqueCandies.size();
    }
};
