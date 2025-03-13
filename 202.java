class Program 
{
    public static void main(String args[])
    {

    }

}
class Solution
{
    public static boolean happynumber(int n)
    {
        if(n == 1 || n == 7) return true;
        else if(n<10) return false;
        else
        {
            int sum = 0 ;
            while(n>0)
            {
                int tmp = n%10;
                sum += tmp * tmp;
                n = n / 10;
            }
            return happynumber(sum);
        }
    }
}