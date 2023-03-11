class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, mid;
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        // At this point, target is not found
        // and left and right have crossed over
        // left is the index of the first element greater than target
        // right is the index of the last element smaller than target
        return left;
    }
};
In this solution, we use binary search to find the position where the target should be inserted. The left pointer starts at 0, the right pointer starts at n-1 (where n is the number of elements in the vector), and we calculate the mid index as the average of left and right.

We check if the element at the mid index is equal to the target, in which case we return mid. If the element is greater than the target, we update right to mid-1, since the target should be inserted to the left of mid. Otherwise, we update left to mid+1, since the target should be inserted to the right of mid.

We repeat the binary search until left and right cross over, which means that the target is not found in the vector. At this point, left is the index of the first element greater than the target, and right is the index of the last element smaller than the target. We return left as the insertion position.

This solution has a time complexity of O(log n) since we use binary search, and a space complexity of O(1) since we only use a few variables to keep track of the indices.


