#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int evenNumberBitwiseORs(vector<int> &nums)
    {
        int bit_or = 0;
        for (int num : nums)
        {
            if (num % 2 == 0)
            {
                bit_or = bit_or | num;
            }
        }
        return bit_or;
    }
};
int main()
{
    vector<int> nums={1,2,3,4,5,6};
    Solution solution= Solution();
    cout<<"Even Number Bitwise ORs : "<<solution.evenNumberBitwiseORs(nums);
    return 0;
}