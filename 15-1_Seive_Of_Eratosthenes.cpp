#include <bits/stdc++.h>
using namespace std;

//*======= Finding Prime Number In a Range=========
// void primeSieve(int n)
// {
//   int prime[n + 1] = {0};
//   for (int i = 2; i * i <= n; i++) // for each number, from 2 to i, until such i is reached that its square is more than n
//   {
//     if (prime[i] == 0) // if it is unmarked then
//     {
//       for (int j = i * i; j <= n; j += i) // we jump start from its square and mark all the multilpes(i.e +=i)
//         prime[j] = 1;                     // mark all the multiples
//     }
//   }
//   for (int i = 2; i <= n; i++) // now for each number
//     if (prime[i] == 0)         // if it is still unmarked then its a prime
//       cout << i << " ";        // so we print it.
// }
// int main()
// {
//   int n;
//   cin >> n;
//   primeSieve(n);
//   return 0;
// }

//*========Prime Factorisotion using Sieve====
// spf : smallest prime factor
// input constraint: n<=100;

void primeFactor(int n)
{
  //*our first aim is to find spf of all the numbers
  int spf[100] = {0}; // this arr will store spf of each number from 2 to 100,
                      // why 100, because of contraint
  for (int i = 2; i <= n; i++)
  {
    spf[i] = i;
    // here we are initializing each number as its own spf
    // which is true for prime number because //* each prime number is smallest prime factor of itself
    // but not true for numbers other than prime
    //* we will perform this correction below
  }

  //*performing correction in spf[] of numbers which are non-prime
  // every non prime number can be presented in multiple of prime numbers ==>
  //* a prime number is spf(smallest prime factor) of all its multiple

  for (int i = 2; i <= n; i++)
  {
    // if a number i is having itself as spf then
    if (spf[i] == i)
    {
      // loop to go over of the multiples of i which come after i*i
      // why only multiples which come after i*i and not before
      // (answered in the notes of  prime question)
      for (int j = i * i; j <= n; j += i)
      {
        // and currently if that multiple (j) of i is also having itself a spf
        if (spf[j] == j)
        {
          // then update its spf to i, because of j being multiple of i.
          spf[j] = i;
        }
      }
    }
  }

  //*now we repeatedly divide n with its spf unitl n becomes 1
  while (n != 1)
  {
    cout << spf[n] << " ";
    n = n / spf[n];
  }
}
int main()
{
  int n;
  cin >> n;
  primeFactor(n);
  return 0;
}
