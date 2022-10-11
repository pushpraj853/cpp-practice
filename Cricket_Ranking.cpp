#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int A=0, B=0;
	  int r1, w1, c1, r2, w2, c2;
	  cin>> r1 >> w1 >> c1 >> r2 >> w2 >> c2;
	  r1>r2 ? A++ : B++;
	  w1>w2 ? A++ : B++;
	  c1>c2 ? A++ : B++;
	  A>B ? cout<<"A"<<endl : cout<<"B"<<endl;
	}
	return 0;
}
