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
 ///week12-2.cpp LeetCode 21.Merge Two Sorted Lists(未完成)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ///ListCode*ans=list1; //宣告檔案,(1)亂接到list1

        ///ListNode *ans=new ListNode(99); //(2) 新增值是99
        ListNode*ans=new ListNode(99,new ListNode(88)); //(3)新增一個值是99，右邊又新增一個是90

        return ans; //練習任資料結構struct 
    }
};