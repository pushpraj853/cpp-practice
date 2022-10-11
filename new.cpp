#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//   int n;
//   cout << "Enter Size of Array" << endl;
//   cin >> n;   // size of array
//   int arr[n]; // data_type array_name[array_size];

//   // user input of array

//   // n = 6
//   //  0   1   2   3   4   5 //index
//   // 23  24  25  26  27  28 //respective values
//   for (int i = 1; i <= n; i++)
//   {
//     // cout << "Enter a value: ";
//     cin >> arr[i];
//     // 10 --> arr[0];
//   }

//   // output of array
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }

// 10 12 13 14

// get bit
//  int main()
//  {
//    int n;
//    cin >> n;
//    int position;
//    cin >> position;
//    int x = 1;
//    x = x << position;
//    int ans = n & x;
//    cout << ans << endl;
//  }

// get bit well written
//  int main(){
//    int n;
//    cin >> n;
//    int position;
//    cin >> position;
//    cout << n & (1<<position);
//  }