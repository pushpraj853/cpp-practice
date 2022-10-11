#include <bits/stdc++.h>
using namespace std;

//*Add all numbers till n
// iterative way
// int main()
// {
//   int n;
//   cin >> n;
//   int sum = 0;
//   while (n)
//   {
//     sum += n;
//     n--;
//   }
//   cout << sum << endl;
// }

// recursive method
// int sum(int n)
// {
//   if (n == 0)
//     return 0;
//   int total = n + sum(n - 1);
//   return total;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << sum(n) << endl;
// }

//*Calculate n raised to power of p
// concept: n^p = n*(n^p-1)
// int power(int n, int p)
// {
//   if (p == 0)
//     return 1;
//   int ans = n * pow(n, p - 1);
//   return ans;
// }
// int main()
// {
//   int n, p;
//   cin >> n >> p;
//   cout << power(n, p) << endl;
// }

//* Find the factorial ofa number n
// int fact(int n)
// {
//   if (n == 1 || n == 0)
//     return 1;
//   int ans = n * fact(n - 1);
//   return ans;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << fact(n) << endl;
// }

//* Print the nth Fibonacci number
// 0, 1, 1, 2, 3, 5, 8, 13,....
// int fib(int n)
// {
//   // this function returns the nth term of fibonacci series
//   if (n == 1)
//     return 0;
//   else if (n == 2)
//     return 1;

//   int ans = fib(n - 1) + fib(n - 2);
//   return ans;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << fib(n) << endl;
// }