#include <bits/stdc++.h>
using namespace std;

int leftToRight(vector<int> &a, int left, int right, int num) {
    int count = 0;
    for (int i = left; i <= right; i++) {
        if (a[i] == num) count++;
    }
    return count;
}

int majorityElement(vector<int> &a, int left, int right) {
    if (left == right) return a[left]; 

    int mid = left + (right - left) / 2;

    int leftEle = majorityElement(a, left, mid);
    int rightEle = majorityElement(a, mid + 1, right);

    if (leftEle == rightEle) return leftEle;
    int cleft = leftToRight(a, left, right, leftEle);
    int cright = leftToRight(a, left, right, leftEle);
    return max(cleft,cright);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> a;
    int b;
    while (cin >> b) {
        a.push_back(b);
    }
    if (a.empty()) {
        cout << "ko co major" << endl;
        return 0;
    }
    cout << majorityElement(a, 0, a.size() - 1) << endl;
    return 0;
}
