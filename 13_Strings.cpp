#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  //===========I/O of string============

  // string str1;
  // // for single word input
  // // even if we give sentence only 1st word will be printed
  // cin >> str1;
  // cout << str1 << endl;

  // string str2;
  // // for taking input string which contains
  // // more than one word that too with spaces
  // getline(cin, str2);
  // cout << str2 << endl;

  //=========== initialising a string with a perticular character==========

  // only a char value should be given in 2nd parameter
  // string str3(5, 'n');
  // cout << str3 << endl;

  //========== appending two strings==============

  // Method 1
  // string str4 = "fam";
  // string str5 = "ily";

  // // str5 is added after str4 and
  // // then result is stored in str4
  // str4.append(str5);
  // cout << str4 << endl;

  // // method 2

  // string str6 = "Hello";
  // string str7 = "World";
  // // self explanatory
  // str6 = str6 + str7;
  // cout << str6 << endl;

  //==========making a string empty=======

  // string str1 = "hello how are you";
  // str1.clear();
  // cout << str1 << endl;

  //==========Comparing two string========

  // they are compare based on ascii values
  // string s1 = "aahaa";
  // string s2 = "aafaaz";
  // cout << s1.compare(s2) << endl;

  // it returns -ve, 0, +ve value
  //-ve value => s1 is smaller than s2
  // 0 => s1 is same/equal to s2
  //+ve => s1 is greater than s2
  // length of string does not play any role in this
  // result value is determined by ascii value of different character on same index

  //=======to check if a string is empty or not=======
  // empty() method returns true/ false
  // string s1 = "blah blah blah";
  // if (s1.empty())
  //   cout << "empty" << endl;
  // else
  //   cout << "not empty" << endl;

  // s1.clear(); // clearing the whole string;
  // if (s1.empty())
  //   cout << "empty" << endl;
  // else
  //   cout << "not empty" << endl;

  //=========removing substring========

  // using erase method we can remove a part of substring
  // str.erase(startIndex, no. of characters)
  // if 2nd param is not given then substr from
  // start index till end will be removed

  // string s1 = "nincompoop";
  // s1.erase(3,4);  //ninoop
  // // s1.erase(4); // ninc
  // cout << s1 << endl;

  //=======finding a substring in a given string==========

  // str.find(substr) returns starting index of substring
  // if not found then returns garbage value

  // string s1 = "nincompoop";
  // cout<<s1.find("com")<<endl; // 3
  // // cout << s1.find("zaza") << endl;

  //==========Inserting a substring in a given string ======

  // string.insert(startIndex, substring);
  // returns modified string and stores it in the same string;
  // string s1 = "nincompoop";
  // s1.insert(2, "lol");
  // cout << s1 << endl;

  //=======No of character in a string==========

  // string s1 = "nincompoop";
  // cout << s1.size() << endl;
  // cout << s1.length() << endl;

  //===========extracting a substring from a string=============

  // string.substr(startIndex, #chracters from startIndex)
  // returns extracted substring
  // 1st param is mandatory, 2nd param if not given then goes till last
  // string s1 = "nincompoop";
  // string s = s1.substr(6, 4); //poop
  // string s = s1.substr(3); //compoop
  // cout << s << endl;

  //==========converting String of Numbers to Integer==========

  // string to integer ==> stoi()
  // same as parseInt from Js ==> to extract integer,
  // it should start with Numeric value not alphabet
  // and only extract continous numeric values form start;
  // string s1 = "121xy32"; //"xy123" ==> no o/p
  // int x = stoi(s1);
  // cout << x + 2 << endl; // 123

  //============converting Integer value to string=========
  // to_string(int)
  // int x = 123;
  // string s = to_string(x);
  // cout << s + "40" << endl; // now it'll append 40 to s => 12340

  //=========Sorting a string=================
  // if not using bits/stdc++ then include algorithm

  // string s1 = "askhaslal";
  // sort(s1.begin(), s1.end());
  // cout << s1 << endl;
}