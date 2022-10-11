#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, y;
    cin >> n >> x >> y;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (((a[i] ^ b[j]) & x) == ((a[i] ^ b[j]) & y))
        {
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}

// #include <iostream>

// using namespace std;

// int main()

// {

//   int N, AN, X, Y;

//   cin >> N;

//   while (N--)
//   {

//     cin >> AN;

//     cin >> X;

//     cin >> Y;

//     int A[AN];

//     int B[AN];

//     for (int i = 0; i < AN; i++)
//     {

//       cin >> A[i];
//     }

//     for (int l = 0; l < AN; l++)
//     {

//       cin >> B[l];
//     }

//     int count = 0;

//     for (int k = 0; k < AN; k++)
//     {

//       for (int j = 0; j < AN; j++)
//       {
//         if (((A[k] ^ B[j]) & X) == ((A[k] ^ B[j]) & Y))
//         {
//           count++;
//         }
//       }
//     }

//     cout << count << endl;
//   }

//   return 0;
// }