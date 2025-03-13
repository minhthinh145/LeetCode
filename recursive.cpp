#include <iostream>
#include <iomanip>
float recursive(float n)
{
    if(n==0) return 1.00f;
    else
    {
        return ((2*(n+1))/(2*n+5))*recursive(n-1);
    }
}
int main()
{
    float n = 5;
    std::cout<<std::setprecision(5)<<recursive(n);
    return 0;
}