/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字 [哈希表法]
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int num : nums)
        {
            result ^= num;
        }
        return result;
    }
};
// @lc code=end
