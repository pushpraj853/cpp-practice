// Given an array arr[] of size N. The task is to find the first repeating element in the array of
// integers, i.e., an element that occurs more than once and whose index of first occurrence is
// smallest.

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  const int N = 100;
  int idx[N];

  for (int i = 0; i < N; i++)
  {
    idx[i] = -1;
  }

  int minidx = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (idx[a[i]] != -1) // element a[i] has already occured
    {
      minidx = min(minidx, idx[a[i]]);
    }
    else // if its first occurence of a[i] then update the repeat array for its occurence
    {
      idx[a[i]] = i;
    }
  }
  if (minidx == INT_MAX)
    cout << "-1" << endl;
  else
    cout << minidx << endl;

  return 0;
}