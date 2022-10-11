#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int n, count = 0;
	  cin>>n;
	  for (int i = 0; i < n; i++) {
	    int s, j;
	    cin >> s >> j;
	    if(j-s > 5)
	      count++;
	    else
	      continue;
	  }
    cout<<count<<endl;
	}
	return 0;
}
