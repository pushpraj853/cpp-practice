#include <bits/stdc++.h>
using namespace std;
int kadane(int[], int);
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int nowrapSum = kadane(arr, n);

  // calculating total sum of the org array and
  // changing sign of the array;
  int totalSum = 0;
  for (int i = 0; i < n; i++)
  {
    totalSum += arr[i];
    arr[i] = 0 - arr[i];
  }

  int wrapSum = totalSum - (-kadane(arr, n));

  cout << max(nowrapSum, wrapSum) << endl;
}

int kadane(int arr[], int n)
{
  int currSum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    currSum += arr[i];
    if (currSum < 0)
      currSum = 0;
    else
      maxSum = max(currSum, maxSum);
  }
  return maxSum;
}