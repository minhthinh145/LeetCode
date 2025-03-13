#include <bits/stdc++.h>
using namespace std;    
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *dummy = new ListNode(0);
    ListNode *tail = dummy;
    while(list1 != nullptr && list2 != nullptr)
    {
        if(list1 -> val > list2 -> val)
        {
            tail -> next = list2;
            list2 = list2 -> next;
        }
        else{
            tail -> next = list1;
            list1 = list1 -> next;
        }
        tail = tail -> next;
    }
   if(list1 != nullptr) tail -> next = list1;
   if(list2 != nullptr) tail -> next = list2;
    ListNode *res = dummy -> next;
    delete dummy;
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}