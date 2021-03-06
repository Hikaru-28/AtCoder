using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Sort(s);
        Console.WriteLine(solve(s[0], s[1], s[2]));
    }
    static int solve(int a, int b, int c) { //a < b < c
        int count = 0;
        if ((c-b)%2 == 0 && (c-a)%2 == 0) {
            count += (c-b)/2+(c-a)/2;
        }   
        else if (((c-b)%2 == 0 && (c-a)%2 == 1) || ((c-b)%2 == 1 && (c-a)%2 == 0)) {
            count += (c-b)/2 + (c-a)/2 + 2;
        }
        else {
            count += (c-b)/2 + (c-a)/2 + 1;
        }
        return count;
    }
}