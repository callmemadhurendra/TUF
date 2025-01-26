#include <iostream>
#include <vector>
#include <algorithm>  // for max and min functions

using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int high = 0;
        int maxElement = 0;
        vector<int> hash(10000, 0);  // A hash array to store the frequency of numbers

        // Count the frequency of each element in the vector
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] += 1;
        }

        // Find the element with the highest frequency
        for (int i = 0; i < hash.size(); i++) {
            if (hash[i] > high) {
                high = hash[i];
                maxElement = i;
            }
        }

        return maxElement;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Use push_back to manually add elements to the vector
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(1);

    // Call the function to find the most frequent element
    int result = solution.mostFrequentElement(nums);

    // Print the result
    cout << "The most frequent element is: " << result << endl;

    return 0;
}
