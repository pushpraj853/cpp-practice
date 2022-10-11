#include <bits/stdc++.h>
#include <string.h>
using namespace std;
// int main()
// {
//   char arr[100];
//   cin >> arr;
//   int i = 0;

//   for (int i = 0; arr[i] != '\0'; i++)
//   {
//     cout << arr[i];
//   }
// }

// palindrome or not
// int main()
// {
//   int n;
//   cin >> n;
//   char name[n + 1];
//   cin >> name;
//   int ans = 1;
//   for (int i = 0; i <= n / 2; i++)
//   {
//     if (name[i] != name[n - 1 - i])
//     {
//       ans = 0;
//       break;
//     }
//   }
//   if (ans)
//     cout << "Palindrome" << endl;
//   else
//     cout << "not palindrome" << endl;
//   return 0;
// }

// length of largest word in a sentence
int main()
{
  string sentence;
  getline(cin, sentence);
  int largest = INT_MIN;
  int count = 0;
  int st = 0;
  int mxst = 0;
  for (int i = 0; i <= sentence.length(); i++)
  {
    if (sentence[i] == ' ' || sentence[i] == '\0')
    {
      if (count > largest)
      {
        largest = count;
        mxst = st;
      }
      count = 0;
      st = i + 1;
    }
    else
      count++;
  }
  cout << largest << endl;
  cout << mxst << endl;

  for (int i = 0; i <= largest; i++)
  {
    cout << sentence[i + mxst];
  }
}
