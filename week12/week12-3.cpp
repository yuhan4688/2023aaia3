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
 ///week12-ˇ.cpp LeetCode 21.Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans=new ListNode(0); //空包彈，下一筆才是真正的答案
        ListNode *now =ans;
        while(list1 !=nullptr || list2!=nullptr){
            if(list1==nullptr){//左邊是空的
                now->next = list2; //把左邊留下
                break; //結束了
            }else if(list2==nullptr){ //右邊是空的
                now->next = list1;//把右邊留下
                break;  //結束了              
            }
            else if(list1->val < list2->val){ //list1比較小
                now->next=new ListNode(list1->val);//小的放人
                list1=list1->next;//換下一筆
                now=now->next;//答案也換下一筆
            }else{//list2比較小
                now->next=new ListNode(list2->val);//小的放人
                list2=list2->next;//換下一筆
                now=now->next;//答案也換下一筆

            }
        }
        return ans->next; //ans是空包彈，下一筆是真正的答案
    }
};