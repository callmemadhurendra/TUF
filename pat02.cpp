#include <iostream>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                int left = j, right = 2 * n - j - 2, top = i, bottom = 2 * n - i - 2;
                cout << n - min(min(top, bottom), min(left, right)) << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    solution.pattern22(n);

    return 0;
}

