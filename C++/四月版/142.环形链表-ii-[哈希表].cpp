/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II [哈希表]
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        unordered_set<ListNode *> visited;
        while (head)
        {
            if (visited.count(head))
            {
                return head;
            }
            visited.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};
// @lc code=end
