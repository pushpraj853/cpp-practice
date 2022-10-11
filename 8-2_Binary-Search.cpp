#include<bits/stdc++.h>
using namespace std;
int binarySearch(int[], int, int);

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  cout<<bianrySearch(arr, n, key)<<endl;
  return 0;
}

int binarySearch(int a[], int size, int value){
  int s = 0;
  int e = size;
  while(s<=e){
    int mid = (s+e)/2;
    if(a[mid] == value)
      return mid;
    else if(a[mid] > value)
      e = mid - 1;
    else if(a[mid] < value)
      s = mid+1;
  }
  return -1;
}