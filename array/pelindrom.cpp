#include<iostream>
using namespace std;
int main()
{
int arr [] ={1,2,3,4,5};
int n=5;
for(int i=0;i<n;i++)
{

    if(arr[i]!=arr[n-i-1])
    {
        cout<<"not a pelindrom";
        break;
    }
    else{
        cout<<"pelindrom";
        break;
    }
 }
}