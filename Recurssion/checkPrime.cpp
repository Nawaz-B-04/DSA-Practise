class Solution {
public:
    // Main method for testing the checkPrime function
    int main() {
        Solution solution;
        int num = 7; 
        bool result = solution.checkPrime(num); 
        cout << (result ? "Prime" : "Not Prime") << endl; 
        return 0;
    }
    bool checkPrime(int num) {
     // 0 and 1 are not prime numbers
        if (num <= 1) {
            return false;
        }
       // Call the helper function to check for primality
        return prime(num, 2); 
    }
private:
    bool prime(int num, int x) {
    // Base case: x > sqrt(num), so the number is prime
        if (x > sqrt(num)) {
            return true; 
        }
        if (num % x == 0) {
        // Found a divisor, so the number is not prime
            return false; 
        }
       // Recursive call with the next divisor
        return prime(num, x + 1); 
    }
};
Time Complexity O(sqrt(N)) because we only need to check for divisors up to the square root of the number.
Space Complexity : O(sqrt(N)) due to the recursion stack depth which can grow up to the square root of the number.
