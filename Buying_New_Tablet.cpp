#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, budget;
    cin >> n >> budget;
    int tablet[n][3];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cin >> tablet[i][j];
      }
    }
    int screen = 0;
    for (int i = 0; i < n; i++)
    {
      if (tablet[i][2] <= budget)
      {
        int currScreen = tablet[i][0] * tablet[i][1];
        screen = max(currScreen, screen);
      }
      else
        continue;
    }
    if (screen)
      cout << screen << endl;
    else
      cout << "no tablet" << endl;
  }
  return 0;
}
