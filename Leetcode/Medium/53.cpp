#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxsum = INT32_MIN;
        int sum = 0;
        for (int num : nums)
        {
            sum += num;
            maxsum = max(maxsum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxsum;
    }
};
int main()
{
    // 53. Maximum Subarray
    //Kadane algorithma
    vector<int> nums = {1, 2, -3, 4, 5};
    Solution solution = Solution();
    cout << "Max Sub-Array: " << solution.maxSubArray(nums);
    return 0;
}