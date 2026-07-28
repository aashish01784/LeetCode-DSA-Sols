class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target) {
                first = mid;
                h = mid - 1;
            }
            else if (target > nums[mid]) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }

        // Reset pointers
        l = 0;
        h = nums.size() - 1;

        // Find last occurrence
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target) {
                last = mid;
                l = mid + 1;
            }
            else if (target > nums[mid]) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }

        return {first, last};
    }
};