#include <bits/stdc++.h>
using namespace std;
int euclidGCD(int a, int b)
{
  while (b != 0)
  {
    int rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << euclidGCD(a, b) << endl;
}