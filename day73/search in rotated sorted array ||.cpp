class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int len = nums.size();
        int s = 0, e = len - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                e--;
                s++;
            }
            else if (nums[s] <= nums[mid]) {
                if ((nums[s] <= target) && (nums[mid] > target)) {
                    e = mid - 1;
                }
                else {
                    s = mid + 1;
                }
            }
            else {
                if ((nums[mid] < target) && (nums[e] >= target)) {
                    s = mid + 1;
                }
                else {
                    e = mid - 1;
                }
            }
        }
        return false;
    }
};
