#include <iostream>
#include <vector>
using namespace std;
class MinMax{
    public :
    int FindMin(vector<int> nums){
        //INT32_MAX  is a infinity positive number 
        int min= INT32_MAX;
        for(int num:nums){
            if(Min(min,num)!=min){
                min=num;
            }
        }
        return min;
    }
    int FindMax(vector<int> nums){
        //INT32_MIN  is a infinity negative number 
        int max= INT32_MIN;
        for(int num:nums){
            if(Max(max,num)!=max){
                max=num;
            }
        }
        return max;
    }
    //Compare for max
    int Max(int val1,int val2){
        return (val1>=val2)? val1:val2;
    }
    //Compare for min
    int Min(int val1,int val2){
        return (val2>=val1)? val1:val2;
    }
};
int main(){
    MinMax minmax=MinMax();
    vector<int> nums={1,24,2,5,7,67,2,-1,35,-45};
    cout<<minmax.FindMin(nums)<<endl;
    cout<<minmax.FindMax(nums)<<endl;
    return 0;
}