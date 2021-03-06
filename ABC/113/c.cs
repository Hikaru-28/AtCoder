using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int n = s[0];
        int m = s[1];
        int[][] l = new int[m][];
        for (int i = 0; i < m; i ++) {
            l[i] = new int[4];
            int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            l[i][0] = i;
            l[i][1] = a[0];
            l[i][2] = a[1];
        }
        Array.Sort(l, (a, b) => a[2] - b[2]);
        int[] c = new int[n];
        for(int i = 0; i < m; i ++) {
            c[l[i][1]-1] ++;
            l[i][3] = c[l[i][1]-1];
        }
        Array.Sort(l, (a, b) => a[0] - b[0]);
        for(int i = 0; i < m; i ++) {
            Console.WriteLine(String.Format("{0:D6}", l[i][1]) + String.Format("{0:D6}", l[i][3]));
        }
    }
}