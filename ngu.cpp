#include <iostream>
using namespace std;
int Recursive(int n)
{
    if(n<0) {cout<<"khong hop le :  "; return -1;}
    if(n==0) return 1;
    else if(n%2==0) return (n/2)*Recursive((n/3)+1); //làm tròn xuống
    
    else
    {
        return double((3*n+1)*Recursive(n-1));
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n; cin>>n;
    cout<<Recursive(n);
    return 0;   
}