class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxSum = nums[0];
        int minSum = nums[0];

        int curMax = nums[0];
        int curMin = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            curMax = max(nums[i], curMax + nums[i]);
            maxSum = max(maxSum, curMax);

            curMin = min(nums[i], curMin + nums[i]);
            minSum = min(minSum, curMin);

            total += nums[i];
        }

        total += nums[0];

        if(maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};