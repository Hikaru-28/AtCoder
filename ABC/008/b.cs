using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
  static void Main(string[] args)
  {
    int n = int.Parse(Console.ReadLine());
    string[] x = new string[n];
    HashSet<string> hash = new HashSet<string>();
    for (int i = 0; i < n; i ++)
    {
      x[i] = Console.ReadLine();
      hash.Add(x[i]);
    }
    string ans = "";
    int[] num = new int[hash.Count()];
    int j = -1;
    foreach (string s in hash) //HashSetの要素を呼び出すにはforeach。HashSetはインデクサで要素を取得できないので。
    {
      j ++;
      for (int i = 0; i < n; i ++)
      {
        if (s == x[i]) num[j] ++;
        if (i == n - 1)
        {
          if (j == 0) ans = s;
          if (num[j] == num.Max()) ans = s;
          if (j + 1 == hash.Count()) Console.WriteLine(ans);
        }
      }
    }
  }
}
