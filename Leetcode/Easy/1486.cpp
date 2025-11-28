#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int xor_num = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = start + 2 * i;
            xor_num = xor_num ^ temp;
        }
        return xor_num;
    }
};
int main()
{
    // 1486. XOR Operation in an Array
    Solution solution = Solution();
    cout << "XOR operation :" << solution.xorOperation(5, 0) << endl;
    cout << "XOR operation :" << solution.xorOperation(8, 3) << endl;
    return 0;
}