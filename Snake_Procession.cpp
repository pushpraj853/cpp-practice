#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string str;
    while (n--) // recieving the input string character by character
    {
      char x;
      cin >> x;
      if (x != '.') // if recieving anything other than dot then add it to str.
        str += x;
    }
    bool flag = false;
    if (str.length() % 2 == 1) // if length is odd then pair of HT will never be possible
    {
      flag = true;
    }
    else
    {
      for (int i = 0; i < str.length(); i = i + 2)
      {
        if (str[i] == 'H' && str[i + 1] == 'T') // by incr i=i+2 we check (0,1)-(2,3)-(4,5) for HT repeatidively
          flag = false;
        else // if even for once the pattern is not satisfied then change flag and break out of loop.
        {
          flag = true;
          break;
        }
      }
    }

    if (flag)
      cout << "Invalid" << endl;
    else
      cout << "Valid" << endl;
  }
  return 0;
}