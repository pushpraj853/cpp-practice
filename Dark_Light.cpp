#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	for (int i = 0; i < t; i++) {
	    int changes, initial;
      cin>>changes>>initial;
	    if(initial == 1){
	        if(changes%4 == 0)
	          cout << "On" <<endl;
          else
	          cout << "Ambiguous" <<endl;
	    }
	    else if(initial == 0){
	        if(changes%4 == 0)
            cout<< "Off"<<endl;
          else
            cout<<"On"<<endl;       
	    }
	}
	return 0;
}
