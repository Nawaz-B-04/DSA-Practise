//Problem Statement :  Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i]; 
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }
        if (cnt == 1) return num;
    }

    return -1;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
#Time Complexity: O(N2)
#Space Complexity: O(1)

//Optimal Solution -
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

#Time Complexity: O(N)
#Space Complexity: O(1) 
