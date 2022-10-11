#include <iostream>
using namespace std;

int main() {
	int t;
  cin >> t;
	while(t--){
	  int a, b, c;
	  cin>> a >> b >> c;
	  if(a+b > b+c){
	    if(a+b > a+c)
	      std::cout << a+b << std::endl;
	    else
	      std::cout << a+c << std::endl;
	  }
	  else if(b+c > a+c)
	    std::cout << b+c << std::endl;
    else
      std::cout << a+c << std::endl;
	}
	return 0;
}
