// week13-2a.cpp 學習計畫 Linked List 第1題
// LeetCode 21. Merge Two Sorted Lists 左邊list1 右邊list2 合起來
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* ans = new ListNode(999);
       ListNode* ans2 = new ListNode(888);
       ans->next = ans2; // 把他們接起來
       // 先寫四行，熟悉一下資料結構
       return ans;
    }
};
