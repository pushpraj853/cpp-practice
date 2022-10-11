#include <bits/stdc++.h>
using namespace std;

//*========Converting case of character in a string==========
// int main()
// {
//   string s = "AbcdEsd";
//   // cout << 'a' - 'A' << endl; // this is from where 32 is coming to picture
//   string lower = s;
//   for (int i = 0; s[i] != '\0'; i++)
//   {
//     if (lower[i] >= 'A' && lower[i] <= 'Z')
//       lower[i] = s[i] + 32;
//   }

//   string upper = s;
//   for (int i = 0; s[i] != '\0'; i++)
//   {
//     if (upper[i] >= 'a' && upper[i] <= 'z')
//       upper[i] = s[i] - 32;
//   }

//   cout << upper << endl;
//   cout << lower << endl;
// }

//*=============converting case using inbuilt function=========
// https://www.educative.io/answers/what-is-the-transform-function-in-cpp

// The transform function is used in two forms:

// Unary operation: The operation is applied to each element in the input range,
//                   and the result is stored in the output array.
// syntax:
// transform(Iterator inputBegin, Iterator inputEnd,
//          Iterator OutputBegin, unary_operation)

// Binary Operation: A binary operation is called on each element of the first input range
//                   and the respective element of the second input range.
//                   The output is stored in the output array.
// syntax:
// transform(Iterator inputBegin1, Iterator inputEnd1,
//          Iterator inputBegin2, Iterator OutputBegin,
//          binary_operation)

// here we have uniary transform
//  transform(s.begin(), s.end(), s.begin(), ::toupper);

// int main()
// {
//   string s = "AbCfsesgsg";
//   transform(s.begin(), s.end(), s.begin(), ::toupper);
//   cout << s << endl;
// }

//*====="FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING"=====
// int main()
// {
//   string s = "38247698217";
//   sort(s.begin(), s.end()); // sorts in ascending order ==> smallest number
//   cout << "Smallest number: " << s << endl;
//   sort(s.begin(), s.end(), greater<int>()); // sorts in descending ==> largest number
//   cout << "Largest Number: " << s << endl;
// }

//*======= maximum frequent character in string=======
// int main()
// {
//   string s = "aaddbhdgsaaaweafffffffff";
//   int freq[26] = {0};
//   for (int i = 0; s[i] != '\0'; i++)
//   {
//     freq[s[i] - 'a'] += 1;
//   }

//   int maxFreq = 0;
//   char ch;
//   for (int i = 0; i < 25; i++)
//   {
//     if (freq[i] > maxFreq)
//     {
//       maxFreq = freq[i];
//       ch = 'a' + i;
//     }
//   }

//   cout << ch << " : " << maxFreq << endl;
// }