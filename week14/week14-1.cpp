//week14-1.cpp(未完成) LeetCode 學習計畫 2. Add Two Numbers 最多100位
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(); //準備新答案
        ListNode* now=ans; //現在要處理的
        while(l1!=nullptr){ //把list1 都複製到ans的now裡
            now->next=new ListNode(l1->val); //新準備一個值
            now=now->next; //換下一筆
            l1=l1->next; //換下一筆
        }
        return ans->next;
    }
};
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