#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int num : nums)
        {
            ans = num ^ ans;
        }
        return ans;
    }
};
int main()
{
    // 136. Single Number
    // Logic
    // Bitwise XOR elimante the duplicate its compare the binary form the number
    // 0^0 = 0 , 1^1=0, 1^0=1 ,0^1=1
    // Example :
    // 1101  = 13
    // 1001  =  9
    // 0100  =  4

    vector<int> nums1 = {2, 2, 1};
    vector<int> nums2 = {4, 1, 2, 1, 2};
    vector<int> nums3 = {1, 2, 3, 3, 1, 2, 8, 5, 9, 5, 9};
    Solution solution = Solution();
    cout << "Array 1 Single Number: " << solution.singleNumber(nums1) << endl;
    cout << "Array 2 Single Number: " << solution.singleNumber(nums2) << endl;
    cout << "Array 3 Single Number: " << solution.singleNumber(nums3) << endl;
    return 0;
}