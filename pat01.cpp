#include <iostream>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        for (int i = 0; i < n; i++) {
            int start = 1;

            if (i % 2 == 0) {
                for (int j = 0; j < i + 1; j++) {
                    cout << start << " ";
                    start = 1 - start;
                }
            } else {
                for (int j = 0; j < i + 1; j++) {
                    start = 1 - start;
                    cout << start << " ";
                }
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    solution.pattern11(n);

    return 0;
}
