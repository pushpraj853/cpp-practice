#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
    int p1, p2, p3, p4, p5;
    cin>> p1 >> p2 >> p3 >> p4 >> p5;
    int total = p1+p2+p3+p4+p5;
    // cout<<total<<endl;
	  switch(total){
	    case 0:
	      std::cout << "Beginner" << std::endl;
	      break;
	    case 1:
	      std::cout << "Junior Developer" << std::endl;
	      break;
	    case 2:
	      std::cout << "Middle Developer" << std::endl;
	      break;
	    case 3:
	      std::cout << "Senior Developer" << std::endl;
	      break;
	    case 4:
	      std::cout << "Hacker" << std::endl;
	      break;
	    case 5:
	      std::cout << "Jeff Dean" << std::endl;
	      break;
	    default: 
	      break;
	  }
	}
	return 0;
}
