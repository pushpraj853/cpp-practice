#include <bits/stdc++.h>
using namespace std;

//* Write a program to Check if a given number is power of 2
// bool isPowerOf2(int);
// int main()
// {
//   int n;
//   cin >> n;
//   int ans = isPowerOf2(n);
//   cout << ans << endl;
// }
// bool isPowerOf2(int n)
// {
//   // return (n && !(n & n - 1));
//   if (n == 0) // corner case
//     return 0;
//   else
//     return !(n & n - 1);
// }

//*====count the number of 1's in binary representation of a number====
// int main()
// {
//   int n;
//   cin >> n;
//   int count = 0;
//   while (n)
//   {
//     n = n & n - 1;
//     count++;
//   }
//   cout << count << endl;
// }

//*generate all possible subsets of a set {a, b, c}
// concept:  no. of subset = 2^n
//                  i
// {}        000    0
// {c}       001    1
// {b}       010    2
// {b, c}    011    3
// {a}       100    4
// {a, c}    101    5
// {a, b}    110    6
// {a, b, c} 111    7

// void subsets(int arr[], int n)
// {
//   for (int i = 0; i < (1 << n); i++) // there are 2^n subsets
//   {
//     for (int j = 0; j < n; j++) // in each subset we check with every bit
//     {
//       if (i & (1 << j)) // if j'th bit in i is set, we check this by applying GetBit at j'th position
//         cout << arr[j];
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];

//   subsets(arr, n);
// }
