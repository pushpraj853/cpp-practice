// #include <bits/stdc++.h>
// using namespace std;
// int bestIndexSum(int arr[], int size, int start, int end, int k)
// {
//   // cout << "start: " << start << " end: " << end << endl;
//   int sum = 0;
//   for (int i = start; i <= end; i++)
//   {
//     sum += arr[i];
//   }
//   start = end + 1;
//   end = start + k;
//   k++;
//   if (end > size)
//   {
//     return sum;
//   }
//   return sum + bestIndexSum(arr, size, start, end, k);
// }
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n + 1];
//   int mxsum = INT_MIN;
//   int currSum = 0;
//   for (int i = 1; i <= n; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 1; i <= n; i++)
//   {
//     currSum = bestIndexSum(arr, n, i, i, 1);
//     // cout << "for index: " << i << " sum is: " << currSum << endl;
//     mxsum = max(currSum, mxsum);
//   }
//   cout << mxsum << endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
long int bestIndexSum(long int arr[], long int size, long int start, long int end, long int k)
{
  // cout << "start: " << start << " end: " << end << endl;
  long int sum = 0;
  for (int i = start; i <= end; i++)
  {
    sum += arr[i];
  }
  start = end + 1;
  end = start + k;
  k++;
  if (end > size)
    return sum;

  return sum + bestIndexSum(arr, size, start, end, k);
}
int main()
{
  long int n;
  cin >> n;
  long int arr[n + 1];
  long int mxsum = INT_MIN;
  long int currSum = 0;
  for (long int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  for (long int i = 1; i <= n; i++)
  {
    currSum = bestIndexSum(arr, n, i, i, 1);
    // cout << "for index: " << i << " sum is: " << currSum << endl;
    mxsum = max(currSum, mxsum);
  }
  cout << mxsum << endl;
  return 0;
}