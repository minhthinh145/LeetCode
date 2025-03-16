#include <bits/stdc++.h>
using namespace std;    
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode() : val(0), next(nullptr) {}
};
/* 
ý tưởng của thuật toán : do đề bài yêu cầu remove node đếm từ cuối về nên ta có thể suy nghĩ như sau :
cho 1 list có k node,
khi đếm từ cuối  về n node thì ta còn k - n node
để tới được vị trí của node thứ k -n đó
ta cần 1 ds phụ 
ta sẽ đẩy head đi n bước ( đi trước n bước )
và ta mới đẩy dummy theo sau

*/
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *res = new ListNode(0,head);
    ListNode *dummy = res;
    for(int i = 0 ; i < n ; i++)
    {
        head = head -> next;
    }
    while(head!=nullptr){
        head = head -> next;
        dummy = dummy -> next;        
    }
    dummy -> next = dummy -> next -> next;
    return res -> next;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}