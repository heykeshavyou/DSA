#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> nums2;
        for (int i = 0; i < n; i++)
        {
            nums2.push_back(nums[i]);
            nums2.push_back(nums[n + i]);
        }
        return nums2;
    }
};
void printArray(vector<int> nums)
{
    for (int num : nums)
    {
        cout << num << ", ";
    }
    cout << endl;
}
int main()
{
    //1470. Shuffle the Array
    vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
    Solution solution = Solution();
    printArray(nums);
    nums = solution.shuffle(nums, 4);
    printArray(nums);
    return 0;
}