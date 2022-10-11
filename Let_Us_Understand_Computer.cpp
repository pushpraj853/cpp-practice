#include <bits/stdc++.h>
using namespace std;

int min(int a[], int start, int n)
{
  int minimum = a[start];
  for (int i = start; i <= n; i++)
  {
    if (a[i] < minimum)
      minimum = a[i];
  }
  return minimum;
}

int step_count(int a[], int b[], int minimum, int n)
{
  int i = 0;
  int step = 0;
  while (i <= n)
  {
    while (a[i] > minimum)
    {
      a[i] = a[i] - b[i];
      step++;
    }
    if (a[i] < minimum)
    {
      minimum = a[i];
      i = 0;
    }
    else if (a[i] < 0)
    {
      step = -1;
      break;
    }
    else
      i++;
  }
  return step;
}

int main()
{
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  int minimum = min(a, 0, n - 1);
  int steps = step_count(a, b, minimum, n - 1);
  cout << steps << endl;
  return 0;
}