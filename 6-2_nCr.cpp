#include<iostream>
using namespace std;
int fact(int);


int main(){
  int n, r;
  cin>> n >> r;
  int result = fact(n)/(fact(r)*fact(n-r));
  cout<< result <<endl;
}

int fact(int x){
  int factorial = 1;
  for (int i = 2; i <= x; i++)
  {
    factorial = factorial*i;
  }
  return factorial;
}