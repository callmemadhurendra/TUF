#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = 0; j < nums.size() - i - 1; ++j) { 
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]); 
                }
            }
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};

    Solution obj;
    vector<int> sortedNums = obj.bubbleSort(nums);

    cout << "Sorted array: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}