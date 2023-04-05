class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int s = 0, e = len - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            mid = s + (e - s) / 2;
            int pre = (mid + len - 1) % (len);
            int next = (mid + 1) % (len);

            if (nums[mid] < nums[next] && nums[mid] < nums[pre]) {
                break;
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
        int middle = mid;
        e = mid-1;
        s = 0;
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        s = middle;
        e = len - 1;
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }
};
