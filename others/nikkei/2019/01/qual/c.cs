using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
  static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    long[] a = new long[n];
    long[] b = new long[n];
    for (int i = 0; i < n; i ++)
    {
      string[] s = Console.ReadLine().Split(' ');
      a[i] = int.Parse(s[0]);
      b[i] = int.Parse(s[1]);
    }
    var ans = Enumerable.Range(0, n)
              .Select(i => a[i] + b[i])
              .OrderByDescending(x => x)
              .Where((value, index) => index % 2 == 0)
              .Sum() - b.Sum();
    Console.WriteLine(ans);
  }
}
