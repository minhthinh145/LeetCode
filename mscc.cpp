#include <iostream>
#include <vector>
using namespace std;
int const minval = -1e6;
//pick vị trí mid ngay left :D
int maxLeftSum(int arr[] , int left , int mid)
{
    int sum = 0;
    int l_sum = minval;
    for(int i = mid ; i >= left ; i--)
    {
        sum+= arr[i];
        if(sum > l_sum)
        {
            l_sum = sum;
        }
    }
    return l_sum;   
}

int maxRightSum(int arr[] , int mid , int right)
{
    int sum = 0;
    int r_sum = minval;
    for(int i = mid + 1; i<=right ; i++)
    {
        sum+=arr[i];
        if(sum > r_sum)
        {
            r_sum = sum;
        }
    }
    return r_sum;
}
int maxSub(int arr[] , int left , int right)
{
    if(left == right)
    return arr[right];

    int mid = (left+right)/2;
    int l_max = maxSub(arr,left,mid);
    int r_max = maxSub(arr, mid + 1 , right);
    int maxval = maxLeftSum(arr,left,mid) + maxRightSum(arr,mid,right);

    return max(max(l_max,r_max),maxval);
}
/*cách 2*/
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum <0){
            sum = 0;
        }
    }
    return maxi;
}    
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n==0) 
    {   
        cout<<"day rong , vui long nhap lai n!!!!!";
         return 0 ;
    }
    int arr1[n];
    int arr2[n];
    cout<<"nhap arr1 :"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr1[i];
    }
    cout<<"nhap arr2 :"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr2[i];
    }
    cout<<"gia tri lon nhat cua day con cua arr1 : "<<maxSub(arr1,0,n-1)<<endl;
    cout<<"gia tri lon nhat cua day con cua arr2 : "<<maxSub(arr2,0,n-1)<<endl;
    return 0;
}