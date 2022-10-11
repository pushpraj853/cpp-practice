#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
  int n1 = mid - start + 1;
  int n2 = end - mid;
  int a[n1];
  int b[n2];
  for (int i = 0; i < n1; i++)
  {
    a[i] = arr[start + i];
  }
  for (int i = 0; i < n2; i++)
  {
    b[i] = arr[mid + 1 + i];
  }
  int i = 0;
  int j = 0;
  int k = start;
  while (i < n1 && j < n2)
  {
    if (a[i] < b[j])
      arr[k++] = a[i++];
    else
      arr[k++] = b[j++];
  }
  while (i < n1)
    arr[k++] = a[i++];
  while (j < n2)
    arr[k++] = b[j++];
}
void mergeSort(int arr[], int l, int h)
{
  if (l < h)
  {
    int mid = (l + h) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, h);
    merge(arr, l, mid, h);
  }
  else
    return;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[n];
  }
  mergeSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}