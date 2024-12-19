//week15-4.cpp 學習計畫Link List  445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* l1){
                vector<int>a;

        while(l1!=nullptr){ //只要還有node
            a.push_back(l1->val) ;//就把值放入陣列
            l1=l1->next;//換下一筆
        }
        ListNode* ans=new ListNode();//新準備一個ans
        ListNode* now=ans; //現在處理的ans

        int N=a.size();
        for(int i=N-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }

        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myReverse(l1);

    }
};