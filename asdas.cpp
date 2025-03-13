    #include <iostream>
    using namespace std;

    long long power(int a, int n)
    {
        if(n==0) return 1; // trg hop co so a^0 = 1
        else 
        {
            return a*power(a,n-1);
        }
    }
    int main()
    {
        int a,n;
        cin>>a>>n;
        cout<<power(a,n);
    }