#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int green, purple;
    int n;
    cin >> green >> purple;
    cin >> n;
    int price = 0;
    int q1, q2;
    int count01 = 0, count10 = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> q1 >> q2;
      if (q1 == 1 && q2 == 1)
        price += (green + purple);
      else if ((q1 == 0 && q2 == 1))
        count01++;
      else if ((q1 == 1 && q2 == 0))
        count10++;
    }
    int costly = purple;
    int cheap = green;
    if (green >= purple)
    {
      costly = green;
      cheap = purple;
    }
    if (count10 > count01)
      price += (count10 * cheap) + (count01 * costly);
    else
      price += (count01 * cheap) + (count10 * costly);
    cout << price << endl;
  }
}