#include <bits/stdc++.h>
using namespace std;    
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
bool hasCycle(ListNode *head)
{
    if(head==nullptr || head -> next == nullptr) return false;
    ListNode *first = head;
    ListNode *second = head;
    while(second!=nullptr && second -> next != nullptr)
    {
        first = first -> next;
        second = second -> next ->next;
        if(first == second) return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}