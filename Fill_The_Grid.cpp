#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int row, col;
	  cin >> row >> col;
    if(row == 1)
      cout<< col <<endl;
    else if(col == 1)
      cout<< row <<endl;
    else if (row%2 == 1 && col%2 == 0)
      cout<< col <<endl;
    else if(row%2 == 0 && col%2 == 1)
      cout<< row <<endl;
    else if (row%2 == 1 && col%2 == 1)
      cout<< row+(col-1) <<endl;
    else if (row%2 == 0 && col%2 == 0)
      cout<< "0" <<endl;
	}
	return 0;
}
