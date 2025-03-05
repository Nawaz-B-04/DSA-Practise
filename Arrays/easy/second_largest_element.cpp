# Problem: Find Second Largest Element in Array
# Time Complexity: O(n)
# Space Complexity: O(1)

//To solve this lets start with brute force solution

//1) Brute force Solution (Assuming there are no duplicates)
#include<bits/stdc++.h> //This will include all header files
using namespace std;
void getSecondLargest(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  //This is the edge case when only one element is present in array
    sort(arr,arr+n);
    int large=arr[n-2];
    cout<<"Second largest is "<<large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getSecondLargest(arr,n);
    return 0;
}


