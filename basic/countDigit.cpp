#include <iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int x = 0;
        // Special case when n is 0
        if (n == 0) {
            return 1;
        }
        // Count digits for positive and negative numbers
        while (n != 0) {
            n = n / 10;  // Remove the last digit
            x++;         // Increment the digit count
        }
        return x;
    }
};

int main() {
    Solution solution;
    int number;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> number;
    
    // Call the method and output the result
    int digitCount = solution.countDigit(number);
    cout << "The number of digits in " << number << " is: " << digitCount << endl;
    
    return 0;
}
