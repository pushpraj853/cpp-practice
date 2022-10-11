#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> arr)
{
  int pair[100] = {0};
  int count = 0;
  for (auto i = arr.begin(); i != arr.end(); i++)
  {
    pair[*i] += 1;
  }
  for (int i = 0; i < 100; i++)
  {
    if (pair[i] > 0)
    {
      cout << "Pair of " << i << ": " << pair[i] / 2 << endl;
      count += pair[i] / 2;
    }
  }
  cout << "total pair: ";
  return count;
}

int main()
{
  int n;
  cin >> n;
  int x;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    arr.push_back(x);
  }
  int result = sockMerchant(n, arr);
  cout << result << endl;
  return 0;
}