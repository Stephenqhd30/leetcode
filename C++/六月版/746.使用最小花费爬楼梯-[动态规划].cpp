/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯 [动态规划]
 */

// @lc code=start
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        // 楼顶为 n，需要 n+1 个状态
        vector<int> dp(n + 1, 0);
        for (int i = 2; i <= n; i++)
        {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[n];
    }
};
// @lc code=end
