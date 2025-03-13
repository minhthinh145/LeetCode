#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *first = head;
        if(head==nullptr){
            return nullptr;
        }
        while(first->next != nullptr){
        ListNode *second = first -> next;
            if(second -> val == first -> val){
                ListNode *tmp = second;
                first -> next = tmp -> next;
                delete tmp;
            }
            else{
                first = first -> next;
            }
        }
 return head;    }
};