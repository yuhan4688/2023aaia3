//week14-3.cpp(完成) LeetCode 學習計畫 2. Add Two Numbers 最多100位
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(); //準備新答案
        ListNode* now=ans; //現在要處理的
        int carry =0;
        while(l1!=nullptr || l2!=nullptr){ //把list1 都複製到ans的now裡
            if(l1==nullptr){
                int here=l2->val+carry; 
                carry=here/10;
                now->next=new ListNode(here%10);//新準備一個值
                now=now->next; //換下一筆
                l2=l2->next;
            }else if(l2==nullptr){
                int here=l1->val+carry; 
                carry=here/10;
                now->next=new ListNode(here%10);//新準備一個值
                now=now->next; //換下一筆
                l1=l1->next; //換下一筆
            
            }else{
                int here=l1->val+l2->val+carry; 
                carry=here/10;
                now->next=new ListNode(here%10);//新準備一個值
                now=now->next; //換下一筆
                l1=l1->next; //換下一筆
                l2=l2->next;
            }
        if(carry>0) now->next=new ListNode(carry);
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