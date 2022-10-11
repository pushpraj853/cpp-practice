#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
      arr[i] = 0;

    if (n % 2 == 0)
      arr[0] = arr[n - 1] = 1;
    else
      arr[n / 2] = 1;

    for (int i = 0; i < n; i++)
      cout << arr[i];
    cout << endl;
  }
  return 0;
}
