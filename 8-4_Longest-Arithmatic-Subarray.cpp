#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int pd = arr[1] - arr[0];
  int length = 2;
  int ans = 2;
  for (int i = 2; i < n; i++)
  {
    if (arr[i] - arr[i - 1] == pd)
    {
      length++;
    }
    else
    {
      pd = arr[i] - arr[i - 1];
      length = 2;
    }
    ans = max(ans, length);
  }
  cout << ans << endl;
}