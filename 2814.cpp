#include <bits/stdc++.h>

using namespace std;

int main()
{

  vector<string> m;

  string x, c;

  int n;
  cin >> n;

  int flag = false, lin = 0, col = 0;
  int k, j, flin, fcol, jlin, jcol, cont;

  while (n--)
  {
    cin >> k >> j;

    cont = 0;

    for (int i = 0; i < j; i++)
    {
      col = 0;
      cin >> x;
      for (int w = 0; w < x.length(); w++)
      {
        c = x.at(w);
        if (c == "F")
        {
          flin = lin;
          fcol = col;
        }
        if (c == "J")
        {
          jlin = lin;
          jcol = col;
        }
        col++;
      }
      lin++;
    }
    float dist = sqrt(pow(jlin - flin, 2) + pow(jcol - fcol, 2));

    float res = k / (pow(0.99, floor(dist * 10)));

    printf("%.0f dBs\n", floor(res));
  }
  return 0;
}