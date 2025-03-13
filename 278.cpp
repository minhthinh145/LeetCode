// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int mid){
    
}
class Solution {
public:
    int BinarySearch(int n){
        int left = 1;
        int right = n;
        while(left<=right){
            int mid = left + (right - left)/2;
            bool isBad = isBadVersion(mid);
            if(isBad){
                right = mid -1;
            }
            if(!isBad){
                left = mid + 1;
            }
  
        }
        return left;
    }
    int firstBadVersion(int n) {
        return BinarySearch(n);  
    }
};