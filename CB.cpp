#include <iostream>
using namespace std;
long long cb(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    /*
        f(n) = f(n-1) + f(n-2);
    */
   return cb(n-1) + cb(n-2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;cin>>n;
    cout<<cb(n);
    return 0;
}