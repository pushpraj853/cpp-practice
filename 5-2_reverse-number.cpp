#include<iostream>
using namespace std;

int main(){
  int n, lastdigit, rev;
  cin>>n;
  while (n>0)
  {
    lastdigit = n%10;
    rev = rev*10 + lastdigit; 
    n = n/10;
  }
  cout<<rev<<endl;
  return 0;
}