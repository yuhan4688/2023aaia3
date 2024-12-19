//week15-5.cpp 學習計畫Link List  445. Add Two Numbers II
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
        l1=myReverse(l1);
        l2=myReverse(l2);
        ListNode* ans= new ListNode();
        ListNode* now=ans;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr){
            if(l1==nullptr){
                int here=l2->val+carry;
                now->next=new ListNode(here%10);
                carry=here/10;
                now=now->next;
                //l1=l1->next;
                l2=l2->next;
            }else if(l2==nullptr){
                int here=l1->val+carry;
                now->next=new ListNode(here%10);
                carry=here/10;
                now=now->next;
                l1=l1->next;
                //l2=l2->next;
            }else{
                int here=l1->val+l2->val+carry;
                now->next=new ListNode(here%10);
                carry=here/10;
                now=now->next;
                l1=l1->next;
                l2=l2->next;
            }
        }
        if(carry>0) now->next=new ListNode(carry);
        return myReverse(ans->next);
    }
};