// Check if there exists two elements in an
// array such that their sum is equal to given k

#include <bits/stdc++.h>
using namespace std;
bool checkPairSum(int[], int, int);

int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bool ans = checkPairSum(arr, n, k);
  cout << ans << endl;
}

bool checkPairSum(int arr[], int n, int k)
{
  sort(arr, arr + n);
  int low = 0;
  int high = n - 1;
  while (low < high)
  {
    if (k == arr[low] + arr[high])
    {
      // cout << low << " " << high << endl;
      return true;
    }
    if (k > arr[low] + arr[high])
      low++;
    else if (k < arr[low] + arr[high])
      high--;
  }
  return false;
}