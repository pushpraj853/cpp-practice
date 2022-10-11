#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
      if (k - arr[i] >= 0)
      {
        k = k - arr[i];
        arr[i] = 1;
      }
      else
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
      cout << arr[i];
    }
    cout << endl;
  }
  return 0;
}
