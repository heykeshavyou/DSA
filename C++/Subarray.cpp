#include <iostream>
using namespace std;
void AllSubarray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << nums[k];
            }
            cout<<" ";
        }
         cout<< endl;
    }
}
int main()
{
    int nums[5]={1,2,3,4,5};
    int n=5;
    AllSubarray(nums,n);
    return 0;
}