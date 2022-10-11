#include<bits/stdc++.h>
using namespace std;
int linearSearch(int[], int, int);


int main(){
  int n, key, flag = 1;
  cin>>n>>key;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>> arr[i];
  }
  int index = linearSearch(arr, n, key);
  cout<<"Found at "<<index<<" index"<<endl;
}

int linearSearch(int a[], int n, int key){
  for (int i = 0; i < n; i++){
    if (a[i] == key)
      return i;
  }
  return -1;
 }
