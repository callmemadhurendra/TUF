 #include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int max = 0, res = 0;
        vector<int> hash(100000, 0);

        // Count the frequency of each number in the input vector
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        // Initialize min with a non-zero frequency
        int min = hash[nums[0]];

        // Find the maximum and minimum frequencies
        for (int i = 0; i < hash.size(); i++) {
            if (hash[i] > max) {
                max = hash[i];
            }
            if (hash[i] < min && hash[i] != 0) {
                min = hash[i];
            }
        }

        return min + max;  // Return the sum of min and max frequencies
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Initialize vector manually using push_back (for older compilers)
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

    // Call the function to get the sum of highest and lowest frequencies
    int result = solution.sumHighestAndLowestFrequency(nums);

    // Output the result
    cout << "The sum of the highest and lowest frequencies is: " << result << endl;

    return 0;
}
