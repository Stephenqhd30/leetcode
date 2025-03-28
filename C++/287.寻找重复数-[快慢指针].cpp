/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数 [双指针(快慢指针法)]
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0], fast = nums[nums[0]];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = 0;
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
// @lc code=end
