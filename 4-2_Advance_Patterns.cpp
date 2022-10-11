#include <iostream>
using namespace std;

// -----inverted patterns-------
// 12345
// 1234
// 123
// 12
// 1

// int main(){
//   int n;
//   cin>>n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n-i+1; j++)
//     {
//       cout<<j;
//     }
//     cout<<endl;
//   }
// }

// -------0-1 pattern----------
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// int main(){
//   int n;
//   cin>> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       if((i+j)%2==0)
//         cout<<"1 ";
//       else
//         cout<<"0 ";
//     }
//     cout<<endl;
//   }
// }

// -----Rhombus Pattern----
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *

// int main(){
//   int n;
//   cin>>n;
//   int col = n*2;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= col; j++)
//     {
//       if(j>n-i && j<=col-i)
//         cout<<"* ";
//       else
//         cout<<" ";
//     }
//     cout<<endl;
//   }
// }

// -------alternative and better(easy) approach to above-----
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
// Concept: Parallel for loops print in  single row until new line comes.
// outer for loop will be used to traverse in rows using endl.
// first inner for loop will print spaces before stars.
// second for loop will print stars after blank spaces.

// int main(){
//   int n;
//   cin>> n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n-i; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = 0; j < n; j++)
//     {
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

//* -----Number Pattern------
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// int main(){
//   int n;
//   cin>> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n-i; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = 1; j <= i; j++)
//     {
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }

//* ------Palindromic Pattern-------
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

// int main(){
//   int n;
//   cin>>n;
//   for (int i = 1; i <= n; i++)
//   {
//     int j;
//     for (j = 1; j <= n-i; j++)
//     {
//       cout<<"  ";
//     }
//     int k=i;
//     for (; j <= n ; j++)    //for (int j = 1; j <= i ; j++)
//     {
//       cout<<k<<" ";
//       k--;
//     }
//     k=2;
//     for (; j <= n+i-1; j++)  //for (int j = 1; j <= i-1; j++)
//     {
//       cout<<k<<" ";
//       k++;
//     }
//     cout<<endl;
//   }
// }

// ----Star Pattern----
//     n=4
//       *
//     * * *
//   * * * * *
// * * * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

// int main(){
//   int n;
//   cin>>n;

//   for (int i = 1; i <= n; i++)
//   {
//     int j;
//     for (j = 1; j <= n-i; j++)
//       cout<<"  ";
//     for (j=1; j <= 2*i-1; j++)
//     {
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   // -----lower part--------
//   for (int i = n; i >= 1; i--)   //to  invert a triangle make changes in the loop which controls the row.
//   {
//     int j;
//     for (j = 1; j <= n-i; j++)
//       cout<<"  ";
//     for (j=1; j <= 2*i-1; j++)
//     {
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

// ------Zig Zag Pattern------
//       n=9
//     *       *
//   *   *   *   *
// *       *       *
//  -----Brute force, using sum of index of stars-----

// int main(){
//   int n;
//   cin>>n;
//   for (int i = 1; i <= 3; i++)
//   {
//     for (int j = 1; j <= n; j++)
//     {
//       if(((i+j)%4==0) || (i==2 && j%4==0))
//         cout<<"* ";
//       else
//         cout<<"  ";
//     }
//     cout<<endl;
//   }
// }
