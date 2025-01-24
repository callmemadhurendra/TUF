#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            // Swap the found minimum element with the first element
            if (minIndex != i) {
                int temp = nums[i];
                nums[i] = nums[minIndex];
                nums[minIndex] = temp;
            }
        }
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums;

    // Input array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Sort the array
    vector<int> sortedNums = solution.selectionSort(nums);

    // Output sorted array
    cout << "Sorted array: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}