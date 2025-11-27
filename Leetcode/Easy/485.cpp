#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int max = 0, count = 0;
        for (int num : nums)
        {
            if (num == 1)
            {
                count++;
            }
            else
            {
                if (count > max)
                {
                    max = count;
                }
                count = 0;
            }
            if (count > max)
            {
                max = count;
            }
        }
        return max;
    }
};
int main()
{
    //  485. Max Consecutive Ones
    vector<vector<int>> numsArray = {{1, 1, 1, 0}, {1, 1, 0, 1, 1, 1, 1, 1, 0, 0}, {1, 0, 0, 1, 0, 0, 1, 1, 0, 0}, {1, 0, 0, 0, 0}};
    Solution solution = Solution();
    for (vector<int> nums : numsArray)
    {
        int temp = solution.findMaxConsecutiveOnes(nums);
        cout << temp << endl;
    }
    return 0;
}