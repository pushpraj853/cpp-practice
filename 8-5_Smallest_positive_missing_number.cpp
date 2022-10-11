#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  int numbers[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    numbers[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= 0)
    {
      numbers[arr[i]] = 1;
    }
  }

  for (int i = 0; i < n; i++) // if zero is not a positive int then i=1
  {
    if (numbers[i] == 0)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}

// idea is to create an array initialised with zero. i.e. numbers[n]
// ignore neagtive numbers, and only for +ve numbers change 0 --> 1
//  then loop over it and the index where first zero is found is the smallest missing positive number.