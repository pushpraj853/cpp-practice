#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int n;
  	cin>>n;
	  int sum1, sum2;
	  for (int i = 0; i < 2; i++) {
  	  int sum = 0;
  	  int a[n];
  	  int max = 0;
  	  for (int j = 0; j < n; j++) {
  	    cin>>a[j];
  	    if(a[j]>max)
  	      max = a[j];
  	    sum = sum + a[j];
  	  }
  	  if(i==0)
  	    sum1 = sum-max;
  	  else
  	    sum2 = sum-max;
	  }
	  if(sum1<sum2)
	    std::cout << "Alice" << std::endl;
	  else if(sum2<sum1)
	    std::cout << "Bob" << std::endl;
	  else
	    std::cout << "Draw" << std::endl;

	}
	return 0;
}
