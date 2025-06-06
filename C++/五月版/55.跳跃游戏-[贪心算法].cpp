/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏 [贪心算法]
 */

// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int maxReach = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > maxReach)
            {
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;
    }
};
// @lc code=end
