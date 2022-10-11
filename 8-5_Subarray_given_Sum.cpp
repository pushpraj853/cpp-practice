// Given an unsorted array A of size N of non-negative integers,
// find a continuous subarray which adds to a given number S.
// returning start and end index of subarray as output.
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int target;
  cin >> target;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j <= n; j++)
    {
      if (sum == target)
      {
        cout << i << " " << j - 1 << endl;
        break;
      }
      if (sum > target)
      {
        break;
      }
      else
        sum = sum + arr[j];
    }
  }
  return 0;
}

// failed case: if no such subarray is found is not covered.