#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int x, n;
    cin>>n >> x;
    if(x%n == 0){
      cout<<x/n<<endl;
    }
    else{
      cout<<min(x/n, (x/n)+(x%n))<<endl;
    } 
  }
}