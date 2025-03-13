#include <bits/stdc++.h>
using namespace std;    
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
/*recursive
ListNode *helper(ListNode *l1 , ListNode *l2, int Carry)
{
    if(l1==nullptr && l2 == nullptr && Carry == 0)
    { 
    return nullptr;
    }
    int val1,val2;
    if(l1 != nullptr)
    {
        val1 = l1 -> val;
    }
    else
    {
        val1 = 0;
    }
    if(l2!=nullptr)
    {
        val2 = l2 -> val;
    }
    else
    {
        val2 = 0;
    }
    int total = val1 + val2 + Carry;
    int newVal = total%10;
    int newCarry = total/10;
    ListNode *node = new ListNode(newVal);
    node -> next = helper(l1 ? l1->next : nullptr , l2 ? l2->next : nullptr,newCarry);
    return node;
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    return helper(l1,l2,0);
}
*/
/*2 pointer*/
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *dummyHead = new ListNode(0);
    ListNode *tail = dummyHead;
    int Carry = 0;
    while(l1!=nullptr||l2!=nullptr||Carry!=0)
    {
        int val1 = (l1!=nullptr) ? l1->val : 0;
        int val2 = (l2!=nullptr) ? l2->val : 0;

        //calcu
        int total = val1 + val2 + Carry;
        int newVal = total%10;
        int newCarry = total/10;

        //init a new linked list
        ListNode *newNode = new ListNode(newVal);
        tail -> next = newNode;
        tail = tail -> next;

        l1 = (l1!=nullptr) ? l1 -> next : nullptr;
        l2 = (l2!=nullptr) ? l2 -> next : nullptr;
    }
    /* 
        Sau vòng while trên 
    */
    ListNode *res = dummyHead -> next;
    delete dummyHead;
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}