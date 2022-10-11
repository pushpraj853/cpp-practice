#include <bits/stdc++.h>
using namespace std;

//* Write a program to find a unique number in an array
//* where all numbers except one,are present twice
// concept:
// xor of a number with itself even times = 0;
// xor of a number with itself odd times = number itself;

// int unique(int arr[], int n)
// {
//   int xorSum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     xorSum = xorSum ^ arr[i];
//   }
//   return xorSum;
// }

// int main()
// {
//   int arr[] = {2, 4, 6, 3, 4, 6, 2};
//   cout << unique(arr, 7) << endl;
// }

//* Write a program to find 2 unique numbers in an array
//* where all numbers except two, are present twice
// int setBit(int n, int pos)
// {
//   return ((n & (1 << pos)) != 0);
// }

// void unique(int arr[], int n)
// {
//   int xorsum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     xorsum = xorsum ^ arr[i];
//   }
//   int temp = xorsum;

//   int setbit = 0;
//   int pos = 0;
//   while (setbit != 1)
//   {
//     setbit = xorsum & 1;
//     pos++;
//     xorsum = xorsum >> 1;
//   }

//   int newxor = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if (setBit(arr[i], pos - 1))
//     {
//       newxor = newxor ^ arr[i];
//     }
//   }

//   cout << newxor << endl;
//   cout << (temp ^ newxor) << endl;
// }

// int main()
// {
//   int arr[] = {2, 4, 6, 7, 4, 5, 6, 2};
//   unique(arr, 8);

//   return 0;
// }

//* Write a program to find a unique number in an array
//* where all numbers except one, are present thrice.

bool getBit(int n, int pos)
{
  return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
  return (n | (1 << pos));
}

int unique(int arr[], int n)
{
  int result = 0;
  for (int i = 0; i < 64; i++) // traversing over all 64 bits of a number
  {
    int sum = 0;
    for (int j = 0; j < n; j++) // traversing over all the number of array
    {
      if (getBit(arr[j], i)) // checking if i'th bit of j'th ele is 1 or not, by using get bit
      {
        sum++; // if so, then we increment count of such element
      }
    }
    if (sum % 3 != 0)             // if that count is divisible by 3 then, its not the unique number
    {                             // but if it isn't then
      result = setBit(result, i); // we have to set 1 for that position in result, (initally our result is zero)
    }
  }
  return result;
}

int main()
{
  int arr[] = {1, 6, 2, 6, 4, 2, 1, 1, 6, 2};
  cout << unique(arr, 10) << endl;
  return 0;
}