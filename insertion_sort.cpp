#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Insertion Sort
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        // Traverse through the array
        for (int i = 0; i <= n - 1; i++) {
            int j = i;
            // Swap elements till we reach a greater element
            while (j > 0 && nums[j - 1] > nums[j]) {
                int temp = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = temp;
                j--;
            }
        }
        return nums;
    }
};

int main() {
    // Input array
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(9);
    nums.push_back(1);
    nums.push_back(6);

    // Create an object of Solution class
    Solution solution;

    // Call insertionSort function
    vector<int> sortedNums = solution.insertionSort(nums);

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < sortedNums.size(); i++) {
        cout << sortedNums[i] << " ";
    }
    cout << endl;

    return 0;
}