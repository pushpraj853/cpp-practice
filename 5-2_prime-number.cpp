#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n == 1 || n % i == 0)
    {
      cout << "Not Prime" << endl;
      return 0;
    }
  }
  cout << n << " is Prime" << endl;
  return 0;
}

// any factor of a prime number n, after sqrt(n),
// will be a multiple of a number which is less
// than sqrt(n), meaning we have already checked
// that factor.