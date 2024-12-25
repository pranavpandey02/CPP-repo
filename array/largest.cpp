#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,9,8};
    int large = -1;
    int secLarge = -1;
  
    for(int i=0;i<5;i++)
    {
        if(arr[i]>large)
        {
         large= arr[i];    
        }
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i]>secLarge && arr[i]!=large)
        {
            secLarge=arr[i];
        }
    }
    cout<<secLarge;
}