vector<int> beautifulArray(int n) {
    vector<int> res = {1};
    while (res.size() < n) {
        vector<int> temp;
        for (int i : res) {
            if (2 * i - 1 <= n) temp.push_back(2 * i - 1);
        }
        for (int i : res) {
            if (2 * i <= n) temp.push_back(2 * i);
        }
        res = temp;
    }
    return res;
}
