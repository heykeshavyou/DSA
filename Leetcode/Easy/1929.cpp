#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int size = 2;
        vector<int> newNums;
        while (size != 0)
        {
            for (int num : nums)
            {
                newNums.push_back(num);
            }
            size--;
        }
        return newNums;
    }
};
int main()
{
    // Concatenation of Array
    vector<vector<int>> numsArray = {{1, 42, 34, 65}, {1, 2, 4, 6}, {1, 2, 4, 6, 7}, {1, 2, 3, 4, 5}};
    Solution solution = Solution();
    for (vector<int> nums : numsArray)
    {
         cout<<"[";
        vector <int> temp=solution.getConcatenation(nums);
        for(int num :temp){
            cout<<" "<<num<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}