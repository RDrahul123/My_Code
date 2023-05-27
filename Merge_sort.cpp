#include<iostream>
using namespace std;

void merge(int arr[], int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergersort(int arr[], int a, int n)
{
    int low=a;
    int high= n;
    if(low<high)
    {
        int mid= (low+ (high-1))/2;
        mergersort(arr, low, mid);
        mergersort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[8]= {5, 3, 6, 2, 7, 9, 0, 1};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int a=0;
    mergersort(arr, a, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}