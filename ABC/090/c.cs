using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long[] s = Console.ReadLine().Split().Select(long.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    static long solve(long n, long m) {
        long count = 0;
        if(n==1 && m==1) count = 1;
        else if(n == 1 || m == 1) count = n * m - 2;
        else count = n*m - (2*(m+n)-4);
        return count;
    }
}