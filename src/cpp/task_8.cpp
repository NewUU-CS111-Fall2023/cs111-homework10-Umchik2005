/*
 * Author:
 * Date:
 * Name:
 */

class Problem8 {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        // If the total sum is odd, partitioning is not possible.
        if (totalSum % 2 != 0) {
            return false;
        }

        int targetSum = totalSum / 2;
        vector<bool> dp(targetSum + 1, false);
        dp[0] = true; // Base case: 0 sum is always achievable

        for (int num : nums) {
            for (int sum = targetSum; sum >= num; sum--) {
                if (dp[sum - num]) {
                    dp[sum] = true; // If a sum can be reached by excluding num, it can also be reached by including num
                    if (sum == targetSum) {
                        return true; // Target sum achieved
                    }
                }
            }
        }

        return false; // No valid partition found
    }
};