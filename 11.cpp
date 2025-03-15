#include <bits/stdc++.h>
using namespace std;
/*
Idea bài toán : dùng kỹ thuật 2 con trỏ
1 con trỏ left và right ở đầu và cuối
ta tính area = (right - left) * min(a[right],a[left]) vì cái nào thấp nhất thì ms lấy cái đó
sau đó cập nhật max_area = max(max_area,area)
if(a[left] < a[right]) thì đẩy left dần về trái
nếu k thì lùi right về dần phải để tìm khả năng có 1 hình có area ln hơn
*/
int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;
        while(left <= right)
        {
            int h = min(height[left],height[right]);
            int weight = right - left;
            int area = h * weight;
            
            //cập nhật
            max_area = max(max_area,area);
            
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_area;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}