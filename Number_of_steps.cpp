// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int a[n], b[n];
//   int min = INT_MAX;
//   int count = 0;
//   bool flag = true;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//     if (a[i] < min)
//       min = a[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cin >> b[i];
//     while (a[i] > min)
//     {
//       a[i] = a[i] - b[i];
//       count++;
//     }
//     if (a[i] < min)
//     {
//       flag = false;
//     }
//   }
//   if (flag)
//     cout << count << endl;
//   else
//     cout << "-1" << endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n], b[n];
  int min = INT_MAX;
  int count = 0;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] < min)
      min = a[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] > min)
    {
      while (!(a[i] == min))
      {
        a[i] = a[i] - b[i];
        if (a[i] == min)
        {
          flag = true;
          count++;
          break;
        }
        else
          continue;
      }
    }
  }
  if (flag)
    cout << count << endl;
  else
    cout << "-1" << endl;
  return 0;
}
