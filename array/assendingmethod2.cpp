#include <iostream>
using namespace std;
int main()
{
    int a[]={1,-1,2,-2,3};
    int temp;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
}