using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        long[] s = Console.ReadLine().Split().Select(long.Parse).ToArray();
        Console.WriteLine(solve(s[0], s[1]));
    }
    static int solve(long x, long y) {
        int count = 0;
        while(x <= y) {
            count ++;
            x *= 2;
        }
        return count;
    }
}