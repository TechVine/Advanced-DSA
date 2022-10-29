import java.util.*;  
class squares
{
    static int getMinSquares(int n)
    {
        int res = n,i;
        if (n <= 3)
            return n;
        for (i = 1; i <= n; i++)
        {
            int temp = i * i;
            if (temp > n)
                break;
            else
                res = Math.min(res, 1 + getMinSquares(n - temp));
        }
        return res;
    }
   
    // Driver code
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int a= sc.nextInt();
        System.out.println(getMinSquares(a));
    }
}
