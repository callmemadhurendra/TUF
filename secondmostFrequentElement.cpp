#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int fMax = 0, sMax = 0, res = -1;
        vector<int> hash(100000, 0);

        // Count the frequency of each element
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        // Find the most frequent element
        for (int i = 0; i < hash.size(); i++) {
            if (hash[i] > fMax) {
                fMax = hash[i];
            }
        }

        // Find the second most frequent element
        for (int i = 0; i < hash.size(); i++) {
            if (hash[i] < fMax && hash[i] > sMax) {
                sMax = hash[i];
                res = i;
            }
        }

        return res;
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
    nums.push_back(4);
    nums.push_back(4);

    // Call the function to find the second most frequent element
    int result = solution.secondMostFrequentElement(nums);

    // Print the result
    cout << "The second most frequent element is: " << result << endl;

    return 0;
}
