#include <bits/stdc++.h>
using namespace std;

//* Check if an array is sorted or not in striclty increasing order
// bool isSorted(int arr[], int n)
// {
//   if (n == 1)
//     return 1;
//   return (arr[0] < arr[1] && isSorted(arr + 1, n - 1));
//   // name of array is itself a pointer to the array.
// }

// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   int ans = isSorted(arr, n);
//   if (ans)
//     cout << "Sorted" << endl;
//   else
//     cout << "Not Sorted" << endl;
// }

//* Print numbers till n:- 1. Decreasing order 2. Increasing order
// void decreasingOrder(int n)
// {
//   if (n == 0)
//     cout << n << " ";
//   else
//   {
//     cout << n << " ";
//     decreasingOrder(n - 1);
//   }
// }

// void increasingOrder(int n)
// {
//   if (n == 0)
//     cout << n << " ";
//   else
//   {
//     increasingOrder(n - 1);
//     cout << n << " ";
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << "Decreasing:" << endl;
//   decreasingOrder(n);
//   cout << endl
//        << "Increasing" << endl;
//   increasingOrder(n);
//   return 0;
// }

//* Find the first and last occurence of a number in an array
// int firstIndex(int arr[], int n, int i, int key)
// {
//   if (i == n)
//     return -1;
//   if (arr[i] == key)
//     return i;
//   return firstIndex(arr, n, i + 1, key);
// }
// int lastIndex(int arr[], int n, int i, int key)
// {
//   if (i == 0) // reached to start index
//     return -1;
//   if (arr[i] == key)
//     return i;
//   return lastIndex(arr, n, i - 1, key);
// }
// int main()
// {
//   int n, k;
//   cin >> n >> k;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   cout << firstIndex(arr, n, 0, k) << endl;
//   cout << lastIndex(arr, n, n - 1, k) << endl;
// }
