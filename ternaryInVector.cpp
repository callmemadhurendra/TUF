#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {         //---------------HERE WE CANT USE TERNIARY OPERATOR
                v.push_back(i);       //---------------NOT v.push(i)
            }
        }
        return v;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;  // Input the number n
    vector<int> result = solution.divisors(n);

    // Output the divisors
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
