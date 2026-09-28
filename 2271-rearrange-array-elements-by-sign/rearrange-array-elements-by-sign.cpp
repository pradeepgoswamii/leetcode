class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        int pos = 0; // even indices
        int neg = 1; // odd indices

        for (int num : nums) {
            if (num > 0) {
                ans[pos] = num;
                pos += 2;
            } else {
                ans[neg] = num;
                neg += 2;
            }
        }

        return ans;
    }
};