#include <iostream>
#include <vector>
using namespace std;

class Solution {	
    public:		
        void reverseString(vector<char>& s) {
            int n = s.size();
            for (int i = 0; i < n / 2; i++) {
                swap(s[i], s[n - i - 1]);
            }
        }
};

int main() {
    // Define vector manually without initializer list
    vector<char> s;
    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');

    // Create an object of Solution class
    Solution sol;
    
    // Call the reverse function
    sol.reverseString(s);

    // Print the reversed string
    cout << "Reversed String: ";
    for (size_t i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}