// Find the subarray in an array which has maximum sum
// Concept only positive number will contribute to maximize the sum.
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

  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
    if (sum <= 0)
      sum = 0;
    else
      ans = max(ans, sum);
  }

  cout << ans << endl;
  return 0;
}
