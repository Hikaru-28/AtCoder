using System;
using System.Linq;

class Program
{
  public static void Main(string[] args)
  {
    int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
    if (s[1] % s[0] == 0) Console.WriteLine(s[0] + s[1]);
    else Console.WriteLine(s[1] - s[0]);
  }
}
