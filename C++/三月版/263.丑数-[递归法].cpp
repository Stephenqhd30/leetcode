/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数 [递归法]
 */

// @lc code=start
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        if (n == 1)
        {
            return true;
        }
        if (n % 2 == 0)
        {
            return isUgly(n / 2);
        }
        if (n % 3 == 0)
        {
            return isUgly(n / 3);
        }
        if (n % 5 == 0)
        {
            return isUgly(n / 5);
        }
        return false;
    }
};
// @lc code=end
