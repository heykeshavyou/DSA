#include <iostream>
#include <vector>
using namespace std;
class Algorithm
{
public:
    // Using a temp variable
    void ReverseArrayByTemp(int nums[], int size)
    {
        int end = size - 1;
        for (int i = 0; i < size / 2; i++)
        {
            int temp = nums[i];
            nums[i] = nums[end];
            nums[end] = temp;
            end--;
        }
    }
    // Using + - logic
    void ReverseArrayByMath(int nums[], int size)
    {
        int end = size - 1;
        for (int i = 0; i < size / 2; i++)
        {
            nums[i] = nums[i] + nums[end];
            nums[end] = nums[i] - nums[end];
            nums[i] = nums[i] - nums[end];
            end--;
        }
    }
    // Using C++ inbuilt Method swap(a,b);
    void ReverseArrayBySwap(int nums[], int size)
    {
        int end = size - 1;
        for (int i = 0; i < size / 2; i++)
        {
            swap(nums[i], nums[end]);
            end--;
        }
    }
};
void printArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
}
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    Algorithm solution = Algorithm();
    // Using Temp variable
    solution.ReverseArrayByTemp(nums, size);
    printArray(nums, size);
    // Using plus minus logic
    solution.ReverseArrayByMath(nums, size);
    printArray(nums, size);
    // Using Swap Method
    solution.ReverseArrayBySwap(nums, size);
    printArray(nums, size);
    return 0;
}