#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  int count =1;
  while (t--){
    string s;
    cin>>s;
    int flag = 1;
    for (int i = 0; s[i]!='\0'; i=i+2){
      if(s[i]==s[i+1]){
        flag = 0;
        cout<<"no"<<endl;
        break;
      }
    }
    if(flag){
      cout<<"yes"<<endl;
    }
  }
}