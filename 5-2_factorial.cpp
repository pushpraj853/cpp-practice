#include<iostream>
using namespace std;

// ------iterative-----
 int main(){
  int n, fact=1;
  cin>>n;
  for (int i = n; i>1; i--)    //for(int i=2; i<=n; i++)
  {
    fact = fact*i;
  }
  cout<<fact<<endl;
 }