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

  int i;
  cin >> i;
  int max = INT_MIN;
  for (int j = 0; j <= i; j++)
  {
    if (arr[j] > max)
      max = arr[j];
  }
  cout << max << endl;
}