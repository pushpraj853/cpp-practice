#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, daily;
    cin >> n >> daily;
    int remain = 0;
    int today[n];
    for (int i = 0; i < n; i++)
    {
      cin >> today[i];
    }

    int breakday = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      if (today[i] - daily >= 0) // aaj ka available is more than or equal to daily need.
      {
        remain = remain + (today[i] - daily); // jo b bcha usko remian me add kr do.
      }
      else if (today[i] - daily < 0 && today[i] + remain >= daily) // aaj ka available without remain, daily need se kam pd rha h
      {                                                            // AND aaj ka available +remain atleast daily need ke barabar ya jyada h.
        remain = remain + today[i] - daily;                        // then aaj ka + remain use krke daily need puri kr(subtract from sum) lo
      }
      else // otherwise aaj ka intake pura ni hoga, break it out.
      {
        breakday = i + 1; // index zero se h to day no. +1 krna pdega
        flag = false;     // flag update kiya taki loop ak bhr jane pr YES bhi na print ho jaye.
        std::cout << "NO " << breakday << std::endl;
        break;
      }
    }
    if (flag)
      cout << "YES" << endl;
  }
  return 0;
}
