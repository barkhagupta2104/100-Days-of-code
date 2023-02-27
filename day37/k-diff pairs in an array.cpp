int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    int count = 0;
    for (auto it : freq) {
        int x = it.first;
        int y = x - k;
        if ((k == 0 && it.second > 1) || (k != 0 && freq.count(y))) {
            count++;
        }
    }
    return count;
