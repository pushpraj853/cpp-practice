#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b; // these are total available candies for Limak and bob respectively.
    cin >> a >> b;
    int i = 1;
    int limak, bob;
    while (true)
    {
      limak = 2 * i - 1; // limak wants to eat 1->3->5 after each turn when bob has eaten hence 2*i-1
      bob = 2 * i;       // bob wants to eat 2->4->6 after each turn when limak has eaten
      if (a >= limak)    // if available candies are more than what limak wants to eat then
        a = a - limak;   // update total candies of limak
      else               // else bob wins.
      {
        cout << "Bob" << endl;
        break;
      }
      if (b >= bob)  // if available candies are more than what bob wants to eat then
        b = b - bob; // update total candies of bob
      else           // else Limak wins.
      {
        cout << "Limak" << endl;
        break;
      }
      i++;
    }
  }
}