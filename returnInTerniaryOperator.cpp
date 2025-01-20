#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
        int pNum = 0;
        
         for (int i = 1; i < n; i++) {
            (n % i == 0) ? pNum += i : pNum;   
        }
        
         return (pNum == n) ? true : false;  // Return true if the sum of divisors equals n
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
     solution.isPerfect(n) ? cout << n << " is a perfect number." << endl : cout << n << " is not a perfect number." << endl;
    
    return 0;
}
