#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int n, k;
	  cin>> n >> k;
	  int a[n];
	  int count = 0;
	  for (int i = 0; i <= n-1; i++) {
	    cin>>a[i];
	    if(a[i]>k)
	      count++;
	  }
	  std::cout << count << std::endl;
	}
	return 0;
}
