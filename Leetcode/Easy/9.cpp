#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        long temp = x;
        long sum = 0;
        while (x != 0)
        {
            int rem = x % 10;
            x = x / 10;
            sum = sum * 10;
            sum = sum + rem;
        }
        if (temp == sum)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // Palindrome Number
    int test[] = {121, 45, 321, 77, 90, 2112, 1234321, 987, 132, 32};
    Solution solution = Solution();
    for (int num : test)
    {
        if (solution.isPalindrome(num))
        {
            cout << num << " is a palindrome number" << endl;
        }
        else
        {
            cout << num << " is not a palindrome number" << endl;
        }
    }
    return 0;
}