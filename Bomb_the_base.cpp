#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
  	int n, x;
    cin>>n >> x;
  	int h[n];
    int temp = 0;
  	for (int i = 0; i < n; i++) {
  	  cin >> h[i];
  	  if(h[i]<x)
  	    temp = i+1;
      // cout<<temp<<endl;
  	}
  	cout<<temp<<endl;
	}
	return 0;
}
