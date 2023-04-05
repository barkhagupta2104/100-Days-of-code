class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        int s = 0, e = len - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            mid = s + (e - s) / 2;
            int pre = (mid + len - 1) % (len);
            int next = (mid + 1) % (len);

            if (nums[mid] < nums[next] && nums[mid] < nums[pre]) {
                return nums[mid];
            } else if (nums[s] <= nums[mid] && nums[mid] <= nums[e]) {
                e = mid - 1;
            } else {
                if (nums[s] <= nums[mid]) {
                    s = mid + 1;
                } else if (nums[mid] <= nums[e]) {
                    e = mid - 1;
                }
            }
        }
        return -1; // The function should return a value in all cases.
    }
};
