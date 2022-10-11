#include <iostream>
using namespace std;
int sum(int);

int main() {
	int t;
	cin>>t;
	while(t--){
	  int d, n;
	  cin >> d >>n;
	  int result = sum(n);
	  for (int i = 1; i < d; i++) {
	    result = sum(result);
	  }
    cout<<result<<endl;
	}
	return 0;
}

int sum(int n){
  return (n*(n+1))/2;
}