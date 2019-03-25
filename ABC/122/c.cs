using System;
using System.Linq;

class Program
{
    static void Main(string[] args) {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int n = a[0];
        int q = a[1];
        char[] s = Console.ReadLine().ToCharArray();
        for (int i = 0; i < n-1; i ++) {
            if (s[i]=='A' && s[i+1]=='C') s[i] = 'a';
        }
        int[] t = new int[n];
        t[0] = 0;
        for (int i = 0; i < n-1; i ++) {
            if (s[i]=='a') t[i+1] = t[i]+1;
            else t[i+1] = t[i];
        }
        for(int i = 0; i < q; i ++) {
            int[] b = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int l = b[0]-1;
            int r = b[1]-1;
            Console.WriteLine(t[r]-t[l]);
        }
    }
}