#include <bits/stdc++.h>
using namespace std;

//* Print all permutation of all the string
// void permute(string str, string ans)
// {
//   if (str.length() == 0)
//   {
//     cout << ans << endl;
//     return;
//   }
//   for (int i = 0; i < str.length(); i++)
//   {
//     char ch = str[i];
//     string ros = str.substr(0, i) + str.substr(i + 1);
//     permute(ros, ans + ch);
//   }
// }
// int main()
// {
//   string str;
//   cin >> str;
//   permute(str, "");
//   return 0;
// }

//*Count the number of paths possible from start point to end point in gameboard

// int countPath(int s, int e)
// {
//   if (s == e)
//     return 1;
//   if (s > e)
//     return 0;
//   int count = 0;
//   for (int i = 1; i <= 6; i++)
//   {
//     count += countPath(s + i, e);
//   }
//   return count;
// }
// int main()
// {
//   // int s, e;
//   // cin >> s >> e;
//   cout << countPath(0, 3);
//   return 0;
// }

//*Count the number of paths possible in a maze(2-d square maze)
// Concept: either we will be moving in right direction i+1
// or to the downward direction j+1.
// size of maze is n*n
// int countPath(int n, int i, int j)
// {
//   if (i == n - 1 && j == n - 1)
//     return 1;
//   if (i >= n || j >= n)
//     return 0;
//   return countPath(n, i + 1, j) + countPath(n, i, j + 1);
// }
// int main()
// {
//   cout << countPath(3, 0, 0) << endl;
// }