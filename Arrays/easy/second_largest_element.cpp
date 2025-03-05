# Problem: Find Second Largest Element in Array
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

//Better solution if there are duplicates

# Time Complexity: O(n)  + O(n log n)
# Space Complexity: O(1) // As no extra space is used

#include<bits/stdc++.h> 
using namespace std;

void secondLargestElement(int *arr,int n){
     if (n == 0 || n == 1) {  
        cout << -1 << " " << -1 << endl;  
        return;  
    }
int sLargest = INT_MIN;
sort(arr,arr+n);
int largest = arr[n-1]; //gets largest element
    
for (int i = n-2 ; i>=0 ; i-- ){  //as we are already at n-1 so we start from n-2
    if( arr[i] > sLargest && arr[i]!=largest ){
    sLargest = arr[i];
    break;
    }
}
if (sLargest == INT_MIN) {
     cout << -1 << endl;  // If no second largest exists 
} 
else {
        cout << "Second largest element is: " << sLargest << endl;
    }
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    secondLargestElement(arr,n);
    return 0;
}

//Still we can optimize this by not sorting
//Optimal Sol
# Time Complexity: O(N), Single-pass solution
# Space Complexity: O(1)

#include<bits/stdc++.h> 
using namespace std;

void secondLargestElement(int *arr,int n){
     if (n == 0 || n == 1) {  
        cout << -1 << " " << -1 << endl;  
        return;  
    }
    int largest = INT_MIN;
    int slargest = INT_MIN;
for(int i =0; i < n ;i++){
    if(arr[i]>largest){
       slargest = largest;
        largest = arr[i];
    }
    else if(arr[i]>slargest && arr[i]<largest){
        slargest = arr[i];
}
}
if (slargest == INT_MIN) {
     cout << -1 << endl;  // If no second largest exists 
} 
else {
        cout << "Second largest element is: " << slargest << endl;
    }
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    secondLargestElement(arr,n);
    return 0;
}


    


