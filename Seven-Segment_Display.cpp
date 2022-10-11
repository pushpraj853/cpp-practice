#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  long long int temp;
  int n[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  while (t--)
  {
    long long int sticks = 0;
    long long int totalSticks = 0;
    string str;
    cin >> str;
    int size = str.size();
    for (int i = 0; i < size; i++) // get total number of sticks
    {
      int num;
      num = str[i] - '0'; // game of ascii value
      if (num == 0)
        totalSticks += 6;
      else
      {
        while (num > 0)
        {
          sticks = n[num % 10];
          num = num / 10;
          totalSticks += sticks;
        }
      }
    }
    if (totalSticks % 2 == 0) // if total sticks are EVEN then we get
    {                         // largest number as a series of 1's, as 1 uses only 2 sticks
      for (int i = 1; i <= totalSticks / 2; i++)
        cout << 1;
    }
    else                                         // If total sticks are odd then, instead of thinking to waste one sticks
    {                                            // and making series of 1's with remaining even number of sticks.
      totalSticks -= 3;                          // think of using 3 sticks to display 7  in the Left most digit
      cout << 7;                                 // then you'll be left with even number of sticks
      for (int i = 1; i <= totalSticks / 2; i++) // use them for series of 1's
        cout << 1;                               // Why 7 only, not any other digit?
    }                                            // because 7 is only number which uses least number of odd sticks i.e 3.
    cout << endl;                                // and our whole idea was to use odd sticks somehow so that we're left with
  }                                              // even number of total sticks, and use them for series of 1's.
  return 0;
}