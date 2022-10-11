#include <iostream>
using namespace std;
int setBits(int);

int main() {
	int t, n=3;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    int a, b;
	    cin>>a>>b;
	    if(setBits(a) == setBits(b))
	       std::cout << "Pass" << std::endl;
	    else
	       std::cout << "Fail" << std::endl;
	}
	return 0;
}

int setBits(int n){
  int count=0;
  while(n){
    if(n%10){
      count++;
      n = n/10;
    }
    else{
      n = n/10;
    }
  }
  return count;
}