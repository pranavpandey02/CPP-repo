#include<iostream>
using namespace std;
int main()
{
    int missing;
    int n=5;
    int sum;
    int asum;
    int arr[]={1,2,3,5};
    sum = n*(n+1)/2;
    for(int i=0;i<4;++i)
    {
        asum=asum+arr[i];
    }
    missing = sum-asum;
    cout<<missing;
}