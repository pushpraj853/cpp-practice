#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    float t1, t2, r1, r2;
	    cin>> t1 >> t2 >> r1 >> r2;
	    if((t1*t1)/(r1*r1*r1) == (t2*t2)/(r2*r2*r2))
	        std::cout << "Yes" << std::endl;
	    else
	        std::cout << "No" << std::endl;
	}
	return 0;
}
