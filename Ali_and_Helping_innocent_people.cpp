#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  if (((str[0] - 48) + (str[1] - 48)) % 2 == 0)
  {
    if (((str[3] - 48) + (str[4] - 48)) % 2 == 0)
    {
      if (((str[4] - 48) + (str[5] - 48)) % 2 == 0)
      {
        if (((str[7] - 48) + (str[8] - 48)) % 2 == 0)
        {
          if (str[2] != 'A' &&
              str[2] != 'E' &&
              str[2] != 'I' &&
              str[2] != 'O' &&
              str[2] != 'U' &&
              str[2] != 'Y')
          {
            cout << "valid" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "invalid" << endl;
  return 0;
}