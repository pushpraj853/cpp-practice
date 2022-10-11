#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);

int main(){
  int a, b;
  cin>>a>>b;
  for (int i = a; i < b; i++)
  {
     if(isPrime(i))
        cout<<i<<endl;
  }
  return 0;
}

bool isPrime(int x){
  if(x==1)
    return false;
  for (int i = 2; i <= sqrt(x); i++){
    if(x%i==0)
      return false;
  }
  return true;
}