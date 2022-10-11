#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n, count = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i <= n - 1; i++)
      cin >> a[i];
    for (int i = 0; i <= n - 1; i++)
      cin >> b[i];

    if (a[0] >= b[0])
      count++;
    for (int i = 1; i <= n - 1; i++)
    {
      if ((a[i] - a[i - 1]) >= b[i])
        count++;
      else
        continue;
    }
    cout << count << endl;
  }
  return 0;
}
