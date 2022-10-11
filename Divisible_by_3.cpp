#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int a, b;
	  cin >> a >> b;
	  if(a%3==0 || b%3==0)
	    std::cout << "0" << std::endl;
	  else if(a%3==b%3)
	    std::cout << "1" << std::endl;
	  else
	    std::cout << "2" << std::endl;
	}
	return 0;
}
