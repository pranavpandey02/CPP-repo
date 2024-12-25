#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int target;
    cout<<"please enter your target number";
    cin>>target;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
           cout<<"Value is present";
           break;
        }
        else{
            cout<<"wrong input please enter your right input";
            break;
        }
    }
}