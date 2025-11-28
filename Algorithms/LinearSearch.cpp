#include <iostream>
#include <vector>
using namespace std;
class Algorithm
{
    public:
    int LinearSearch(vector<int> nums,int target){
        int size= nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums={1,32,54,76,867,24,8,7,06,13,9,6,24,2,23,97};
    Algorithm solution= Algorithm();
    cout<<"Target 12: "<<solution.LinearSearch(nums,12)<<endl;
    cout<<"Target 24: "<<solution.LinearSearch(nums,24)<<endl;
    cout<<"Target 867: "<<solution.LinearSearch(nums,867)<<endl;
    cout<<"Target 99: "<<solution.LinearSearch(nums,99)<<endl;
    return 0;
}