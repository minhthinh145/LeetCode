#include <bits/stdc++.h>
using namespace std;    
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
/*Two Pointers
ListNode *swapPairs(ListNode *head)
{
    ListNode * dummy = new ListNode(0);
    dummy -> next = head;
    ListNode *pre = dummy;
    while(pre -> next != nullptr && pre -> next -> next != nullptr)
    {
        ListNode *frist = pre -> next;
        ListNode *second = frist -> next;

        //swap
        frist -> next = second -> next;
        second -> next = frist;
        pre -> next = second;

        pre = frist; 
    }
    ListNode * res = dummy -> next;
    delete dummy;
    return res;
}
    */
//recursive
ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) return head; // Base case
    
    ListNode* temp = head->next;  // Store the second node
    head->next = swapPairs(temp->next);  // Recursively swap the remaining list
    temp->next = head;  // Swap current pair
    
    return temp;  // New head of this swapped pair
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}