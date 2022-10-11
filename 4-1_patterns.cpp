#include<iostream>
using namespace std;

// -----rectangular pattern-----
// int main(){
//   int row, col;
//   cin >> row>> col;
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }


// hollow rectangle pattern

// int main(){
//   int row, col;
//   cin >> row >> col;
//   for (int i = 1; i <= row; i++)
//   {
//     for (int j = 1; j <= col; j++)
//     {
//       if(i==1 || i==row || j==1 || j==col)
//         cout<<"*";
//       else
//         cout<<" ";
//     }
//     cout<<endl; 
//   } 
// }


//  -------inverrted half pyramid--------
// int main(){
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n-i; j++)
//     {
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// -----------half pyramid 180 rotated------
//     *
//    **
//   ***
//  ****
// *****

// int main(){
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n; j++)
//     {
//       if(j<=n-i)
//         cout<<" ";
//       else
//         cout<<"*";
//     }
//     cout<<endl;
//   } 
// }

// ------half pyramid using number----
// 1
// 22
// 333
// 4444
// 55555

// int main(){
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<i;
//     }
//     cout<<endl;
//   }
// }

// ------Floyd's Triangle----
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

// int main(){
//   int n;
//   cin>>n;
//   int count = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<count<<" ";
//       count++;
//     }
//     cout<<endl; 
//   }
// }

// ------Butterfly Pattern-----
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

// int main(){
//   int n;
//   cin>>n;
//   int col = n*2;

//   // ----upper half-----
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= col; j++)
//     {
//       if(j>i && j<=col-i)
//           cout<<" ";
//       else
//         cout<<"*";
//     }
//     cout<<endl;
//   }

//   // -----lower half-------
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= col; j++)
//     {
//       if(j<=n-i+1 || j>=n+i)
//           cout<<"*";
//       else
//         cout<<" ";
//     }
//     cout<<endl;
//   } 
// }