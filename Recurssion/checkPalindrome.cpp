#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Method to check if a string is a palindrome
    bool palindromeCheck(string& s) {
        // Start recursion with the whole string
        return isPalindrome(s, 0, s.length() - 1); 
    }

private:
    // Helper method to perform the recursive check
    bool isPalindrome(string& s, int left, int right) {
        // Base Case: If the start index is greater than or equal to the end index, it's a palindrome
        if (left >= right) {
            return true;
        }
        // Check if characters at the current positions are the same
        if (s[left] != s[right]) {
            return false; // Characters do not match, so it's not a palindrome
        }
        // Recur for the next set of characters
        return isPalindrome(s, left + 1, right - 1);
    }
};

// Main method to test the palindromeCheck function
int main() {
    Solution solution;
    cout << boolalpha; // Print bool values as true/false
    cout << solution.palindromeCheck("hannah") << endl; // Output: true
    cout << solution.palindromeCheck("aabbaaa") << endl; // Output: false
    cout << solution.palindromeCheck("aba") << endl; // Output: true
    return 0;
}
Time Complexity : O(N)
Space Complexity: O(N) 
