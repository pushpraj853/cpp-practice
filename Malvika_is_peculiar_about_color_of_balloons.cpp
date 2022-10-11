#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  string s;
	  cin>>s;
	  int na=0, nb=0;
	  for (int i = 0; s[i]!='\0'; i++) {
	    s[i] == 'a' ? na++ : nb++;
	  }
	  na <= nb ? cout<< na <<endl : cout<< nb <<endl;
	}
	return 0;
}
