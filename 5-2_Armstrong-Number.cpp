#include<iostream>
using namespace std;

int main(){
  int n, temp, sum = 0;
  cin>>n;
  temp = n;
  while (n>0)
  {
    int rem = n%10;
    sum = sum + rem*rem*rem;  
    n = n/10;
  }
  if(temp==sum)
    cout<<"Armstrong"<<endl;
  else
    cout<<"Not Armstrong"<<endl;
  return 0;
}