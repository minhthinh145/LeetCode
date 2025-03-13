#include <bits/stdc++.h>
using namespace std;    
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
void reorderList(ListNode* head)
{
/*
Idead : 
Step 1 : tìm đến giữa danh sách 
Step 2 : đảo ngược danh sách phía sau
Step 3 : trộn xen kẽ 2 danh sách lại vs nhau 
*/
//Step 1 : tìm đến giữa
if(head == nullptr) return;
ListNode *slow = head;
ListNode *fast = head;
while(fast!=nullptr && fast -> next != nullptr)
{
    slow = slow -> next;
    fast = fast -> next -> next;
}
//step 2 : đo ngược danh sách phía sau ( từ slow -> fast )
ListNode *second = slow -> next;
ListNode *node = nullptr;
while(second!=nullptr){
    ListNode *tmp = second -> next;
    second -> next = node;
    node = second;
    second = tmp;
}
//Step 3 : trộn 2 danh sách xen kẽ
ListNode *first = head;
second = node;
while(second)
{
    ListNode *tmp1 =first -> next;
    ListNode *tmp2 = second -> next;
    first -> next = second;
    second -> next = tmp1;
    first = tmp1;
    second = tmp2;
}
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}