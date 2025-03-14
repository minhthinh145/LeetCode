#include <bits/stdc++.h>
using namespace std;
/* 
idea của thuật toán : ta mở rộng dần từ center sang 2 bên của chuỗi để tìm plalindrome string dài nhất hiện tại
dùng two pointers skill
ta xét từng phần tử của i 
ta lùi con trỏ trái về trái, con trỏ phải về phải và so sánh kí tự mà con trỏ trái vs con trỏ phải đang mang
for ex:
abca
 |
 L
 R
L  R
khi này a != c nên ko xét nữa
ta sẽ tìm dc độ dài của chuỗi là 1
nhưng làm sao để tính ?
khi đó ta có left = 0, right = 2
ta có thể tính dc bằng cách right - left -1
ta có thể viết hàm expand nhờ logic trên

vào bên trong hàm chính
để trả về string s cần tìm, ta phải biết dc index start và end của nó 
khi này ta bắt đầu duyệt
nhưng có vđề phát sinh : 
abba
rõ ràng nếu xét theo login trên
ta chỉ có chuỗi palindrome là 1
nhưng rõ ràng ta có 1 chuỗi bb có độ dài là 2, vì đối vs các chuỗi palindrome có độ dài chẫn, ta không tìm dc phần tử dối xứng
nó là 1 cái khoảng trắng ??
vậy ta cần phải làm gì để fix dc tình huống này
ta xét 2 phần tử cho 2 con trỏ
vd :
abba
||
LR
khi này ta expand 
và khi i = 1
abba
 ||
 LR
 ta đã tìm dc palindrome
 nhưng làm sao để tính dc start ?
 vì khi hàm expand end ở đợt đó
 ta có thể thấy, với left =1 ,right =2 truyền vào
 ta nhận ra left = 0, right =3
 và nó trả về max len là 2
 start của chuỗi trên là 1 và end là 2
 
 BASIC :
 max_len là độ rộng tính từ đầu mút bên này với đầu mút bên kia của i là độ dài của chuỗi
 nhưng vì đối vs trg hợp palindrome có chẵn ký tự thì ta không lùi dc như bth
 để tính dc start, ta cần phải lùi n bước từ i về i - n ? n = ???
 max_len - 1 để loại bỏ ra ký tự trung tâm đối vs trg hợp lé vd
 aba
 ta chia 2 tại vì khi mở rộng, ta mở rộng cùng lúc từ 2 phía
*/
int expandAroundCenter(string s, int left , int right)
{
    while(left >= 0 && right < s.length()  && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left -1;
}
string longestPalindrome(string s)
{
    if(s.empty()) return "";

    int start = 0;
    int end = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
        int even = expandAroundCenter(s,i,i+1);
        int odd = expandAroundCenter(s,i,i);
        int max_len = max(even,odd);

        if(end - start < max_len)
        {
            start = i - (max_len -1)/2;
            end = i + max_len/2;    
        }
    }
    return s.substr(start,end-start+1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}