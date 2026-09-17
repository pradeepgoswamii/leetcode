

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        // If k is greater than n
        k = k % n;

        // Step 1: Reverse entire array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse index 0 to k-1
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse index k to n-1
        reverse(nums.begin() + k, nums.end());
    }
};