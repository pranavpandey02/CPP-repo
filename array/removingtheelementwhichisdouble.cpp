#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,2,5};
    int target=3;

    for(int i=0;i<5;i++)
    {
        if(arr[i]!=target)
        {
            cout<<arr[i];
        }
    }
}