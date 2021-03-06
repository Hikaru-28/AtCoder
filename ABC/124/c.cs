using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        char[] s = Console.ReadLine().ToCharArray();
        Console.WriteLine(solve(s, s.Length));
    }
    static int solve(char[] s, int n) {
        char[] s1 = new char[n];
        char[] s2 = new char[n];
        for(int i = 0; i < n; i ++) {
            if(i%2==0) {
                s1[i] = '1';
                s2[i] = '0';
            }
            else {
                s1[i] = '0';
                s2[i] = '1';
            }
        }
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i ++) {
            if(s[i] != s1[i]) count1 ++;
            if(s[i] != s2[i]) count2 ++;
        }
        return Math.Min(count1,count2);
    }
}