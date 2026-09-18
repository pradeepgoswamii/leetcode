class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0; // position for non-zero elements

        // Move all non-zero elements forward
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }

        //  Fill remaining positions with 0
        while (index < n) {
            nums[index++] = 0;
        }
    }
};
