//Probelm statement : Left rotate Array by K places

//Brute force solution
# Time Complexity: O(n)
# Space Complexity: O(k) extra temp space is required to store k elements

#include<iostream>
using namespace std;

void leftRotate(int *arr,int n,int k){
  if(n==0) return;
   k = k%n;
if(k==0) return; // No rotation needed if k is 0
int temp[k];
// Copy first k elements into temp array
for(int i = 0;i<k;i++){
  temp[i] = arr[i];
}
// Shift remaining elements to the left
for(int i = 0; i < n-k;i++){
arr[i]=arr[i+k];
}
 // Copy elements from temp back to the end
   for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  leftRotate(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

//Optimal solution
#Time Complexity - O(N) 
#Space Complexity - O(1) 

#include <iostream>
using namespace std;
// Function to Reverse the array
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void leftRotate(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  leftRotate(arr, n, k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}




