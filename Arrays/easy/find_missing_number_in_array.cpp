//Problem : Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

//Brute force :
#Time Complexity: O(N2)
#Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {
    
for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) { //using liner search
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

//Optimal solution
#Time Complexity: O(N)
#Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {
    int sum = (N * (N + 1)) / 2; //Summation of first N numbers:
    int s2 = 0;
  
    for (int i = 0; i < N - 1; i++) {  //Summation of all array elements:
        s2 += a[i];
    }
    int missingNum = sum - s2;
    return missingNum;
}
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

