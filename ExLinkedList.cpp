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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}