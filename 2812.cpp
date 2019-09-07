#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  cin >> n;

  int m, x;

  vector<int> v;
  while (n--)
  {
    cin >> m;

    v.clear();

    int j = m;
    while (j--)
    {

      cin >> x;

      if (x % 2 != 0)
      {
        v.push_back(x);
      }
    }
    sort(v.rbegin(), v.rend());

    int k = (int)v.size() - 1;

    for (int i = 0; i < ((int)(k + 1) / 2) + (k + 1) % 2; i++)
    {
      if (i == ((int)(k + 1) / 2) + (k + 1) % 2 - 1 && k % 2 == 0)
      {
        cout << v[i];
      }
      else
      {
        cout << v[i] << " " << v[k - i];
      }
      if (i != (int)k / 2)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}
