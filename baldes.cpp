#include <bits/stdc++.h>

using namespace std;

typedef vector<pair<int,int>> vi;

vi baldes;

int main()
{

  int n, m, x;

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    baldes.push_back(make_pair(x,x));
  }

  int op, y, maior, menor,maior_parcial;

  while (m--)
  {
    cin >> op >> x >> y;

    if (op == 1)
    {
        if (baldes[y-1].first<x){
            baldes[y-1].first = x;
        }
        if (baldes[y-1].second>x){
            baldes[y-1].second = x;
        }

        //cout << baldes[y-1].first << " " << baldes[y-1].second << endl;
    }
    if (op == 2)
    {
        int dif = INT_MIN;
        for (int i = x-1; i<y; i++){
            maior_parcial = baldes[i].first;
            for (int j=x-1; j<y; j++){

                if (abs(maior_parcial-baldes[j].second) > dif && j!=i){
                    dif = abs(maior_parcial-baldes[j].second);
                }
            }
        }

        cout << dif << endl;
    }
  }

  return 0;
}
