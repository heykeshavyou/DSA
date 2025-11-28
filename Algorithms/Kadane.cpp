#include <iostream>
using namespace std;
int main()
{
    //Kadane Algorithm 
    //kadane say when sum comes to negative reset it to 0
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int sum =0;
    int maxsum=INT32_MIN;
    for(int num:nums){
        sum+=num;
        maxsum=max(sum,maxsum);
        sum = (sum<0)?0:sum;
    }
    cout<<maxsum;
    return 0;
}