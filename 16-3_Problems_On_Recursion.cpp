#include <bits/stdc++.h>
using namespace std;

//*=======Reverse a string using recursion=======

// //? Methood 1
// string reverseStr(string str, int start, int last)
// {
//   if (start == last)
//     return str;
//   else
//   {
//     char temp = str[start];
//     str[start] = str[last];
//     str[last] = temp;
//     return reverseStr(str, start + 1, last - 1);
//   }
// }

// //? Method 2
// int reverseStr2(string str, int last)
// {
//   if (last == -1)
//     return 0;
//   cout << str[last];
//   return reverseStr2(str, last - 1);
// }

// //? Method 3
// void reverseStr3(string str)
// {
//   if (str.length() == 0)
//     return;
//   string ros = str.substr(1);
//   //in ros we are string string starting from 1st index,
//   // leaving the 0th index.
//   reverseStr3(ros);
//   cout << str[0];
// }
// int main()
// {
//   string str;
//   cin >> str;
//   int n = str.length();
//   cout << reverseStr(str, 0, n - 1) << endl;
//   reverseStr2(str, n - 1);
//   reverseStr3(str);
// }

//*=====Replace pi with 3.14 in string=====
// void replacePi(string str)
// {
//   string ros;
//   if (ros.length() == 0)
//     return;
//   if (str[0] == 'p' && str[1] == 'i')
//   {
//     cout << "3.14";
//     ros = str.substr(2);
//   }
//   else
//   {
//     cout << str[0];
//     ros = str.substr(1);
//   }

//   replacePi(ros);
// }

// int main()
// {
//   string str;
//   cin >> str;
//   replacePi(str);
//   return 0;
// }

//*========Tower Of Hanoi=========
// void toh(int n, char src, char dest, char helper)
// {
//   if (n == 0)
//     return; // base case

//   toh(n - 1, src, helper, dest);
//   cout << "Move from " << src << " to " << dest << endl;
//   toh(n - 1, helper, dest, src);
// }
// int main()
// {
//   toh(3, 'A', 'C', 'B');
//   return 0;
// }

//*======Move all x to the end ofthe string====
// i/p: axxbdxcefxhix   o/p: abdcefhixxxxx
// void moveX(string str, int i)
// {
//   if (i == str.length())
//     return;
//   if (str[i] != 'x')
//   {
//     cout << str[i];
//     return moveX(str, i + 1);
//   }
//   else
//   {
//     moveX(str, i + 1);
//     cout << 'x';
//   }
// }
// int main()
// {
//   string str;
//   cin >> str;
//   int n = str.length() - 1;
//   moveX(str, 0);
//   return 0;
// }

//* Generate all sub strings of a string
// for n elements 2^n subset can be formed
// i/p: ABC      o/p:
// void generateSubString(string str, string ans)
// {
//   if (str.length() == 0)
//   {
//     cout << ans << endl;
//     return;
//   }
//   char ch = str[0];
//   string ros = str.substr(1);
//   generateSubString(ros, ans);
//   generateSubString(ros, ans + ch);
// }
// int main()
// {
//   string str;
//   cin >> str;
//   string ans = "";
//   generateSubString(str, ans);
//   return 0;
// }

//* Print all possible words from phone digits
// remember keypad mobile

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string s, string ans)
{
  if (s.length() == 0)
  {
    cout << ans << endl;
    return;
  }
  // extracting the key
  char ch = s[0];
  // taking the respective string value of extracted key from keypadarray
  string code = keypadArr[ch - '0'];
  // removing exracted key and storing rest of keys in ros.
  string ros = s.substr(1);

  // for each character in code string
  // recursively calling keypad() with rest of keys
  for (int i = 0; i < code.length(); i++)
  {
    keypad(ros, ans + code[i]);
  }
}
int main()
{
  keypad("23", "");
  return 0;
}