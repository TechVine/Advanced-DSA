class Solution {
    public int combinationSum4(int[] nums, int target) {
        Set<Integer> set = new HashSet<>();
        if (nums == null || nums.length == 0) {
            return 0;
        }
        for (int num : nums) {
            set.add(num);
        }
        int[] dp = new int[target];
        if (set.contains(1)) {
            dp[0] = 1;
        } else {
            dp[0] = 0;
        }
        for (int i = 1; i < target; i++) {
            int sum = 0;
            for (int num : nums) {
                if (i - num >= 0)
                sum += dp[i - num];
            }
            if (set.contains(i + 1)) {
                sum++;
            }
            dp[i] = sum;
        }
        return dp[target - 1];
    }
}
